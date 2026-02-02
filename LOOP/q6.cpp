// Find the last prime before the given number.
// Write a program in C++ to find the last prime number that occurs before the entered number.

#include <iostream>
using namespace std;

int main () {
    int n, num = 0;
     cout << "Enter a number :"<< endl;
     cin >> n;

     for (int i = n -1;  i>=1; i--) {
        for (int j = 2; j < i;  j++)
        {
            if(i % j == 0)
            num++;
        }
        if (num == 0)
        {
            if (i ==1)
            {
                cout << "No Prime number less than 2" << endl;
                break;
            }
            cout << i <<"is the last prime before " << n << endl;
            break;
        }
        num = 0; 
     }
     return 0;
}