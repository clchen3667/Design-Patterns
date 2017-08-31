enum TaxBase {
	CN_Tax;
	US_Tax;
	DE_Tax;
	FR_Tax;	//change
};

class SalesOrder {
	TaxBase tax;
public:
	double CalculateTax() {
		//...
		if (tax == CN_Tax) {
			//CN**
		}
		else if (tax == US_Tax) {
			//US***
		}
		else if (tax == DE_Tax) {
			//DE***
		}
		else if (tax == FR_Tax) {	//change
			//FR***
		}
		else {
			// **
		}
	}
};
