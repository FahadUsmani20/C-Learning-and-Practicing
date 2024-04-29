#include<iostream>

using namespace std;

/*
Multi Level Inheritance
*/

class Animal
{
    public:

    int age, weight;

    void speak()
    {
        cout << "Animal Speaks" << endl;
    }
};

class Dog : public Animal{

};

class Husky: public Dog
{

};


int main()
{
    
    Husky h;
    h.age = 2;
    h.weight = 5;
    h.speak();
    cout << "Age: "<< h.age<< endl;    
    cout << "Weight: "<< h.weight<< endl;    

    return 0;
}