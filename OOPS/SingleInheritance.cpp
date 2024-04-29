#include<iostream>

using namespace std;

/*
Single Inheritance
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


int main()
{
    Dog d;
    d.age = 2;
    d.weight = 5;
    d.speak();
    cout << "Age: "<< d.age<< endl;    
    cout << "Weight: "<< d.weight<< endl;    

    return 0;
}