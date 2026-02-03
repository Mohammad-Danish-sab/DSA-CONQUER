// Sum of n Odd Natural Numbers
// Write a C++ program that displays the sum of n odd natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout <<"Enter a number :";
    cin >> n;

    cout <<"The odd number is : ";
    for ( i = 1; i < n; i++)
    {
        cout << 2*i-1 <<" ";
        sum += 2*i-1;
    }
    cout << sum << endl;
    return 0;
}
