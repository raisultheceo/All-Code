#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int number1, number2;
    
    // Input two numbers
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    
    // Call the addNumbers function and display the result
    cout << "The sum of " << number1 << " and " << number2 << " is " << addNumbers(number1, number2) << endl;
    
    return 0;
}
