#include<iostream>

using namespace std;

/*
Heirarical Inheritance
*/

class Mammal
{
    public:

    int age, weight;

    void speak()
    {
        cout << "Animal Speaks" << endl;
    }
};

class Dog : public Mammal{
    public:

    void speak()
    {
        cout << "Dog Speaks" << endl;
    }
};

class Human: public Mammal
{
    public:

    void speak()
    {
        cout << "Human Speaks" << endl;
    }
};


int main()
{
    
    Human h;
    Dog d;
    h.speak(); 
    d.speak();

    return 0;
}