class MainForm : public Form{
	ISplitter* prototype;	//原型对象
public:
	MainForm(ISplitter* prototype){
		this->prototype = prototype;
	}
	void Button1_Click(){
		ISplitter * splitter = prototype->clone();	//clone原型
		splitter->split();
	}
};
