#include<iostream>

using namespace std;

/*
Multiple Inheritance
*/

class Animal
{
    public:

    int age, weight;

    void bark()
    {
        cout << "Animal Barks" << endl;
    }
};

class Human
{
    public:
    string name;
    int age, weight;

    void speak()
    {
        cout << "Human Speaks" << endl;
    }
};

class Hybrid : public Animal, public Human
{

};


int main()
{
    
    Hybrid o;
    o.bark();
    o.speak();  

    return 0;
}