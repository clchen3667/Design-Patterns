单例模式 Singleton
动机 Motivation
	在软件系统中，经常有一些特殊的类，必须保证它们在系统中只存在一个实例，才能确保它们的逻辑正确性、以及良好的效率。
	如何绕过常规的构造器，提供一种机制来保证一个类只有一个实例？
	这应该是设计者的责任，而不是使用者的责任。

模式定义
	保证一个类仅有一个实例，并提供一个该实例的全局访问点。

总结
	A.Singleton模式中的实例构造器可以设置为protected以允许子类派生；
	B.Singleton一般不要支持拷贝构造函数和clone接口；
	C.如何实现多线程环境下安全的Singleton？注意对双检查锁的正确实现。
