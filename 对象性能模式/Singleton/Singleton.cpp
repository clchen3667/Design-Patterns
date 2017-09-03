class Singleton{
private:
	Singleton();
	Singleton(const Singleton& other);
public:
	static Singleton* getInstance();
	static Singleton* m_instance;
};

Singleton* Singleton::m_instance = nullptr;


//线程非安全版本
Singleton* Singleton::getInstance(){
	if(m_instance == nullptr){
		m_instance = new Singleton();
	}
	return m_instance;
}


//线程安全版本，但锁的代价过高
Singleton* Singleton::getInstance() {
    Lock lock;
    if (m_instance == nullptr) {
        m_instance = new Singleton();
    }
    return m_instance;
}


//双检查锁，但由于内存读写re-order不安全
//1.分配内存；2.构造；3.返回--》1-3-2，gg
Singleton* Singleton::getInstance() {   
    if(m_instance == nullptr){
        Lock lock;
        if (m_instance == nullptr) {
            m_instance = new Singleton();
        }
    }
    return m_instance;
}


//C++ 11版本之后的跨平台实现 (volatile)
std::atomic<Singleton*> Singleton::m_instance;
std::mutex Singleton::m_mutex;

Singleton* Singleton::getInstance(){
	Singleton* tmp = m_instance.load(std::memory_order_relaxed);	//屏蔽编译器的re-order
	std::atomic_thread_fence(std::memory_order_acquire);	//获取内存fence,内存re-order的屏障
	if (tmp == nullptr) {
		std::lock_guard<std::mutex> lock(m_mutex);
		tmp = m_instance.load(std::memory_order_relaxed);
		if (tmp == nullptr) {
			tmp = new Singleton();
			std::atomic_thread_fence(std::memory_order_release);	//释放内存fence
			m_instance.store(tmp, std::memory_order_relaxed);
		}
	}
	return tmp;
}
