// Display n term of number and their sum 
// write a program in C++ to display n term of natural numbers and their sum.

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Input a number of term :" << endl;
    cin >> n;
    cout << "The natural number upto the" << n << "the term and their sum.";

    for ( i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum = sum + i;   
    }
    cout <<"The sum of n term of natural number is"<< sum << endl;
    
    return 0;
}
