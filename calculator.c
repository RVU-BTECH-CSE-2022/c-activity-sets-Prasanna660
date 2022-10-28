#include <iostream>
using namespace std;

// This function adds two integer numbers
int add(int *x, int *y)
{
    return (*x + *y);
}

// This function subtracts two integer numbers
int subtract(int *x, int *y)
{
    return (*x - *y);
}

// This function multiplies two integer numbers
int multiply(int *x, int *y)
{
    return (*x * *y);
}

// This function divides two integer numbers
int divide(int *x, int *y)
{
    return (*x / *y);
}

int main()
{
    int num1, num2;
    char operation;

    cout << "Please enter the operation you would like to perform: ";
    cin >> operation;

    cout << "Please enter two operands: ";
    cin >> num1 >> num2;

    switch (operation)
    {
        case '+':
            cout << add(&num1, &num2);
            break;
        case '
