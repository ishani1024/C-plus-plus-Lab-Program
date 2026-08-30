#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << a << " " << b;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping: " << a << " " << b<<endl;
    swap(a, b);

    return 0;
}