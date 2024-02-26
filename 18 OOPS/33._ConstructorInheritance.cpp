/*
Constructors in Derived Class in C++

1. We can use constructors in derived classes in C++.
2. If the base class constructor does not have any arguments, there is no need for any constructor in the derived class.
3. But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor.
4. If both base and derived classes have constructors, base class constructor is executed first.

Constructors in Multiple Inheritance:
1. In multiple inheritances, base classes are constructed in the order in which they appear in the class declaration.
2. In multilevel inheritance, the constructors are executed in the order of inheritance.

Special Syntax

1. C++ supports a special syntax for passing arguments to multiple base classes
2. The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
3. The body is called after the constructors is finished executing

Special Case of Virtual Base Class

1. The constructors for virtual base classes are invoked before a non-virtual base class
2. If there are multiple virtual base classes, they are invoked in the order declared
3. Any non-virtual base class are then constructed before the derived class constructor is executed
*/