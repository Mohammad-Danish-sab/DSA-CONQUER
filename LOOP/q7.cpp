// Find the Greatest Common Divisor (GCD) of two numbers.
// write a program in C++ to find the greatest common divisor of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, gcd;

    cout << "Enter first numbers 1:" << endl;
    cin >> num1;

    cout << "Enter Second number 2:" << endl;
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && i <= num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The GCD is :" << gcd << endl;
    return 0;
}
