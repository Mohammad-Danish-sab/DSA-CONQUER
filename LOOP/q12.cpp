// Display the Cube of Numbers Up to an Integer
// Write a program in C++ to display the cube of the number up to an integer.

#include <iostream>
using namespace std;

int main()
{
    int i, num, cube;
    cout << "Enter a number :";
    cin >> num;

    for ( i = 1; i <= num; i++)
    {
        cube = i*i*i;\
        cout <<"Cube of a number is :" << cube << endl;
    }
    
    return 0;
}
