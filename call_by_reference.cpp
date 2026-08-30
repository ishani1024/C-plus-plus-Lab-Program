#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swapping: " << a << " " << b << endl;

    swapValues(a, b);

    cout << "After swapping: " << a << " " << b;

    return 0;
}