#include <iostream>

using namespace std;

int main() {
    float num1;
    float num2;
    char operators;
    float finalAnswer;

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Select operator : ";
    cin >> operators;

    cout << "Enter the second number : ";
    cin >> num2;

    switch (operators) {
        case '+':
            finalAnswer = num1 + num2;
            cout << "Final answer is : " << finalAnswer << endl;
            break;
        case '-':
            finalAnswer = num1 - num2;
            cout << "Final answer is : " << finalAnswer << endl;
            break;
        case '*':
            finalAnswer = num1 * num2;
            cout << "Final answer is : " << finalAnswer << endl;
            break;
        case '/':
            finalAnswer = num1 / num2;
            cout << "Final answer is : " << finalAnswer << endl;
            break;
        default:
            cout << "Enter a valid operator" << endl;
    }

    return 0;
}

