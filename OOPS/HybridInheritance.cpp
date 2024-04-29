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

class Hybrid: public Dog, public Human
{

};


int main()
{
    
    Human h;
    Dog d;
    Hybrid hy;
    
    h.speak(); 
    d.speak();
    // hy.speak(); Will give an error due to ambiguity in inheritance
    hy.Human :: speak(); // Will call speak function form Human
    hy.Dog :: speak(); // Will call speak function form Dog 

    return 0;
}