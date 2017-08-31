class TaxStrategy {
public:
	virtual double Calculate(const Context& context) = 0;
	virtual ~TaxStrategy(){}
};

class CNTax : public TaxStrategy {
public:
	virtual double Calculate(const Context& context) {
		//***
	}
};

class USTax : public TaxStrategy {
public:
	virtual double Calculate(const Context& context) {
		//***
	}
};

class DETax : public TaxStrategy {
public:
	virtual double Calculate(const Context& context) {
		//***
	}
};

//Extention
class FRTax : public TaxStrategy {
public:
	virtual double Calculate(const Context& context) {
		//***
	}
};


class SalesOrder {
private:
	TaxStrategy* strategy;
public:
	SalesOrder(StrategyFactory* strategyFactory) {
		this->strategy = strategyFactory->NewStrategy();
	}
	~SalesOrder() {
		delete this->strategy;
	}
	double CalculateTax() {
		//...
		Context context();
		double val = strategy->Calculate(context);	//多态调用
		//...
	}
};
