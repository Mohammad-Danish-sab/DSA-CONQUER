// Find the Factorial of a number.
// Write a program in C++ to find the factorial of a number.

#include <iostream>
using namespace std;

int main()
{
    int num, fact = 1;
    cout << "Enter a number :" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "The Factorial of a number is :" << fact << endl;
    return 0;
}
