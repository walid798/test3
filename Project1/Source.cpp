#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter First Number: ";
    cin >> firstNumber;
    cout << "Enter Second Number: ";
    cin >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;

    // this is a change

    return 0;
}