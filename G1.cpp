#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    // Itallows user to enter operator i.e. +,-,*, /
    cout << "Masukan operator (+, -, *, /)";
    cin >> op;
    // It allow user to enter the operands
    cout << "Masukan dua angka";
    cin >> num1 >> num2;
    // switch statement begins
    switch (op)
    {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! operator is not correct";
    }
    return 0;
}