#include<iostream>

using namespace std;

int main()
{
    // Inititalizing char array;

    char names[10];

    // Taking input
    cout << "Enter your name: "<<endl;
    cin >> names;
    cout << names << endl; // Output will be name stored.

    //Last character in char array is always '\0'. This is used to denote escape character
    char test_name[5];
    cout << "Enter your test_name: "<<endl;
    cin >> test_name; // Try giving name with spaces such as John Cena
    cout << test_name << endl; // Output will return John


    return 0;
}