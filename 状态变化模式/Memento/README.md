Memento 备忘录
动机 Motivation
	软件构建过程中，某些对象的状态在转换过程中，可能由于某种需要，要求程序能够回溯到对象之前处于某个点时的状态。乳沟使用一些公有接口来让其他对象得到对象的状态，便会暴露对象的细节实现。
	如何实现对象状态的良好保存与恢复？同时不因此破坏对象本身的封装性？

模式定义：
	不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。以后可将该对象恢复到之前保存的状态。

总结：
	A.Memento存储原发器对象内部状态，在需要时回复原发器状态；
	B.核心是信息隐藏，Originator要向外接隐藏信息，保持其封装性。同时需要将状态保存到外界；
	C.现代语言都具有相当的对象序列化支持，因此往往采用效率较高、又易正确实现的序列化方案支持Memento模式。
