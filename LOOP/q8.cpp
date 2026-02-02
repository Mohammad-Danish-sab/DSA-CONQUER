// Sum of the digit of a given number.
// write a progrm in C++ to find the sum of the digit of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, r, sum = 0;

    cout << "Enter a number :" << endl;
    cin >> num1;

    num2 = num1;

    while (num1 > 0)
    {
        r = num1 % 10;
        num1 = num1/10;
        sum = sum + r;
    }
    cout <<"sum of the digit : " << num2 << "is" << sum << endl;
    return 0;
}
