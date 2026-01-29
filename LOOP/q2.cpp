#include <iostream>
using namespace std;

int main () {
    int i, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << "Sum of First 10 natural number" << sum << endl;
    
}