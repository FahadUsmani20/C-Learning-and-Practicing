#include<iostream>

using namespace std;

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

}