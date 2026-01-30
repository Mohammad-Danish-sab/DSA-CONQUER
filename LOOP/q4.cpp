// Check Wheater a number is Prime or Not
// Write a Program in C++ to check  wheather a number is Prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cout <<"Entered a number"<< endl;
    cin >> n;

    for (int  i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            num++;
        }
        
    }
    if (num == 2)
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Numer is not Prime"<< endl;
    }
    return 0;
}
