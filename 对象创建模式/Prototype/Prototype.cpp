//抽象类
class ISplitter{
public:
	virtual void split() = 0;
	virtual ISplitter* clone() = 0;	//通过clone自己创建对象
	virtual ~ISplitter(){}
}
