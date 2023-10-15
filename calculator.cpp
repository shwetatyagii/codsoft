// CodSoft Internship : Task One
// Domain : C++ Programming
// Intern : Shweta (shwetatyagi489@gmail.com)
#include<iostream>
using namespace std;
int main() {
    double firstValue, secondValue;
    char operatorSymbol;

    cout << "Welcome to the Arithmetic Operator Program!" << endl;
    cout << "Please enter the first number: ";
    cin >> firstValue;
    cout << "Please enter the second number: ";
    cin >> secondValue;

    cout << "Choose one operation operation (+, -, *, /): ";
    cin >> operatorSymbol;

    double result;
    bool validOperation = true;

    switch (operatorSymbol) {
        case '+':
            result = firstValue + secondValue;
            break;
        case '-':
            result = firstValue - secondValue;
            break;
        case '*':
            result = firstValue * secondValue;
            break;
        case '/':
            if (secondValue != 0) {
                result = firstValue / secondValue;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                validOperation = false;
            }
            break;
        default:
            cout << "Invalid operation. Please select a valid operation." << endl;
            validOperation = false;
    }

    if (validOperation) {
        cout << "Result: " << result << endl;
    }

    return 0;
}
