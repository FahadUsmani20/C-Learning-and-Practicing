#include<iostream>

using namespace std;

//Tower of Hanoi
void towerofHanoi(int n, char source, char destination,  char helper)
{
    if(n == 0)
    {
        return;
    }

    towerofHanoi(n-1, source, helper, destination);
    cout << "Move from " << source << " to " << destination<<endl;
    towerofHanoi(n-1, helper, destination, source);
}

int main()
{
    towerofHanoi(3, 'A', 'C', 'B');
    

    return 0;
}