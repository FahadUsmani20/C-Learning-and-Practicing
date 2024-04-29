#include<iostream>

using namespace std;

/*
Encapsulation:

- Fully Encapsulated Class: All data memebers are Private.
- Used for Information Hiding
- Increases Security
- We can also make the class Read only ny not creating a setter
- Helps in Unit Testing  
*/

// Implementation of Encapsulation
class Student
{
    private:
    string name;
    int age;
    bool gender;

    public:
    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

/*
Inheritance:
- Inheriting a properties of a class in to another class.
*/

class Human
{
    public:
    int age, weight;
    float height;

    void setInfo(int age, float height, int weight)
    {
        this->age = age;
        this->height = height;
        this->weight = weight;
    }

    void printInfo()
    {
        cout << "Age: " << this->age << endl;
        cout << "Height: " << this->height << endl;
        cout << "Weight: " << this->weight << endl;
    }
};

class Male : public Human
{
    public:
    string name, gender = "Male";

    void setName(string name)
    {
        this->name = name;
    }

    void printInfo()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Gender: " << this->gender << endl;
        cout << "Height: " << this->height << endl;
        cout << "Weight: " << this->weight << endl;
    }
};



int main()
{
    Male fahad;
    fahad.setName("Fahad");
    fahad.setInfo(25, 5.9, 70);
    fahad.printInfo();

    return 0;
}