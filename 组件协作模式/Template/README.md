模板方法Template Method
————定义一个操作中的算法的骨架(稳定)，而将一些步骤(变化)延迟到子类中。Template Method使子类可以不改变一个算法的结构即可重定义(Override)该算法的某些特定步骤。
动机Motivation：————				在软件构建过程中，对于某一项任务，它常常有稳定的整体操作结构，但各个子步骤却有很多改变的需求，或者由于固有的原因（比如框架与应用之间的关系）而无法和任务的整体结构同时实现。
1.是一种非常基础性的设计模式，在面向对象系统中有着大量的应用。它用最简洁的机制(虚函数的多态性)为很多应用程序框架提供了灵活的扩展点，是代码复用方面的基本实现结构;
2.“不要调用我，我来调用你”的反向控制结构是Template Method的典型应用;
3.被Template Method调用的虚方法可以没有任何实现，但一般将它们设置为protected方法。
