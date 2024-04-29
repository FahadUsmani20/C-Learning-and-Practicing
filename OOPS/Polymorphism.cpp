#include<iostream>

using namespace std;

/*
Compile Time Polymorphism / Static Polymorphism

- Function Overloading - Different type or number of arguments in a function with the same name
- Operator Overloading

Runtime Time Polymorphism / Dynamic Polymorphism
- Method Overloading: Re-Implementation of methods or functions

Abstraction

- Show only essential information
- Hiding unnecessary information form users using access modifiers
*/

class A
{
    public:
    int a, b;

    void sayHello()
    {
        cout << "Hello" << endl;
    }
    
    void sayHello(string name) // Example of Function Overloading
    {
        cout << "Hello " <<name << endl;
    }

    void operator + (A &obj) // Example of Operator Overloading
    {
        int value1x = this->a;
        int value2x = obj.a;
        
        int value1y = this->b;
        int value2y = obj.b;

        cout << "Output: " << value2x + value1x << "+ i" << value2y + value1y << endl;
    }
};

class B : public A
{
    public:

    void sayHello() // Example of Method Overloading
    {
        cout << "Hello from class B" << endl;
    }
};

int main()
{
    A obj1, obj2;
    obj1.a = 5;
    obj1.b = 1;
    obj1.sayHello();
    obj1.sayHello("Fahad");

    obj2.a = 4;
    obj2.b = 1;
    obj2.sayHello("Sahil");

    obj1 + obj2;

    B b;
    b.sayHello(); // Runtime Polymorphism

    return 0;
}