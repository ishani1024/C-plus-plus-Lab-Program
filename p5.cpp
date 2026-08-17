#include <iostream>
using namespace std;

int main()
{
    int n, temp, sum = 0, digit;

    cout << "Enter an integer: ";
    cin >> n;

    temp = n;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == temp)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
