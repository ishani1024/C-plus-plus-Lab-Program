#include <iostream>
using namespace std;

void addition(int a[10][10], int b[10][10], int r, int c)
{
    int sum[10][10];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Addition of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}

void subtraction(int a[10][10], int b[10][10], int r, int c)
{
    int sub[10][10];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sub[i][j] = a[i][j] - b[i][j];

    cout << "Subtraction of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }
}

void multiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
    int mul[10][10] = {0};

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];

    cout << "Multiplication of matrices:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }
}

void transpose(int a[10][10], int r, int c)
{
    cout << "Transpose of matrix:\n";

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2, choice;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    cout << "\n1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Transpose\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            if (r1 == r2 && c1 == c2)
                addition(a, b, r1, c1);
            else
                cout << "Addition is not possible.";
            break;

        case 2:
            if (r1 == r2 && c1 == c2)
                subtraction(a, b, r1, c1);
            else
                cout << "Subtraction is not possible.";
            break;

        case 3:
            if (c1 == r2)
                multiplication(a, b, r1, c1, r2, c2);
            else
                cout << "Multiplication is not possible.";
            break;

        case 4:
            transpose(a, r1, c1);
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}