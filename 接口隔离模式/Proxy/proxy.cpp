class ISubject{
public:
	virtual void process();
};

//proxy设计
class SubjectProxy : public ISubject{
public:
	virtual void process(){
		//对RealSubject的一种简介访问
		//...
	}
};

class ClientApp{
	ISubject* subject;
public:
	ClientApp(){
		subject = new SubjectProxy();
	}
	void DoTask(){
		//...
		subject->process();
		//...
	}
};
