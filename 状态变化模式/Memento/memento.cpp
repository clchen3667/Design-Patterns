class Memento{
	string state;
public:
	Memento(const string& s):state(s){}
	string getState() const {return state;}
	void setState(const string& s) {state = s;}
};

class Originator{
	string state;
public:
	Memento createMemento(){
		Memento m(state);
		return m;
	}
	void setMemento(const Memento& m){
		state = m.getState();
	}
};

int main(){
	Originator originator;
	//捕获对象状态，存储到备忘录
    Memento mem = orginator.createMemento();
	//... 改变orginator状态
    
    //从备忘录中恢复
    orginator.setMemento(memento);
}
