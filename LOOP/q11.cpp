// Print a Square Pattern with '#' Character
// Write a program in C++ to print a square pattern with the # character.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter a number :" << endl;
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    
    return 0;
}
