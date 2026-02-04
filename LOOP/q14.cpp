//Sum of n Even Natural Numbers
//Write a C++ program that displays the sum of the n terms of even natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout <<"Enter a number :";
    cin >> n;

    cout <<"The even number is : ";
    for ( i = 1; i < n; i++)
    {
        cout << 2*i <<" ";
        sum += 2*i;
    }
    cout << sum << endl;
    return 0;
}
