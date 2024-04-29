#include<iostream>

using namespace std;

/*
 Constructors are created by Default
 If we create a Parameterized Constructor we should define a non Parameterized Constructors as it will not be created by default.
 
 Copy Constructors are created by default.
 Copy Constructor are passed by reference to avoid creating an infinite loop of calling Copy Constructor.
 Defult Copy Constructor Creates a Shallow Copy
*/

/*
Destructors
Used to de-allocate the memory taken by class
Destructors are created by default.
For Static Allocated Object Destructor is called automatically.
For Dynamic Allocated Object Destructor is clled manually.
*/


class student
{
    public:
    string name;
    int age;
    bool gender;

    student() // Creation of Constructors
    {
        cout << "Non Parameterized Constructor Called" << endl;
    }

    //Parameterized Constructors:
    student(int age)
    {
        cout << "Parameterized Constructor Called" << endl;
        this->age = age; // 'This' keyword stores address of the object
    }

    student(student& temp) // Creation of Copy Constructor for Static Allocation of Object
    {
        cout << "Copy Constructor Called!"<<endl;
        this->name = temp.name;
        this->age = temp.age;
        this->gender = temp.gender;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    ~student()
    {
        cout << "Destructor Called!"<<endl;
    }

};

int main()
{
    //Static Creations
    cout << "Constructor Statically" <<endl;
    student fahad; // will call constructor automatically
    cout << endl;
    cout << "Fahad Details" <<endl; // will use Non Parameterized Constructor
    fahad.name = "Fahad";
    fahad.age = 25;
    fahad.gender = 1;
    fahad.printInfo();
    cout << endl;
    
    //Dynamic Creations
    cout << "Constructor Dynamically" <<endl;
    student *sahil = new student(22);
    cout << endl;
    cout << "Sahil Details" <<endl; // will use the Parameterized Constructor
    sahil->name = "Sahil"; // Note we didnt initialize age method as we have called the parameterized constructor
    sahil->gender = 1;
    sahil->printInfo();
    cout << endl;
    
    cout << "Copy Constructor for Staticaly Allocated Object" <<endl;
    student fahad2(fahad);
    fahad2.printInfo();
    cout << endl;

    //De-Allocating Memory
    delete sahil;
    
    return 0;
}