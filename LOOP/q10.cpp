//Sum of the Series (1*1) + (2*2) + ... + (n*n)
//Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "Enter the value for nth term :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++) {
        sum += i * i;
        cout <<"i * i : " << i * i << endl; 
    }
    cout <<"The sum of the above series is : " << endl;
    return 0;
}
