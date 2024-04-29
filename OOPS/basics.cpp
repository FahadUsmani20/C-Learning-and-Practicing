#include<iostream>

using namespace std;

// Empty class is allocated 1 byte of memory

/*
Access Modifiers:
Public: Can be inherited by Child Classes and accesed outside the Parent class
Private: Cannot be inherited or accessed outside the Parent class
Protected: Can be inherited but cannot be accessed outside the Parent class
*/

class student
{
    public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main()
{
    /*
    student a;
    a.name = 'Fahad';
    a.age = 25;
    a.gender = true;
    */
   
   /*
  Static Allocation
    student arr[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> arr[i].name;
        cout << endl;
        cout << "Age: ";
        cin >> arr[i].age;
        cout << endl;
        cout << "Gender: ";
        cin >> arr[i].gender;
        cout << endl;
    }
    for(int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
   */ 

   /*
  Dynamic Allocation

   student *a = new student;

   a->name = "hans";
   a->age = 22;
   a->gender = 1;

   a->printInfo();
   */
  
   
}