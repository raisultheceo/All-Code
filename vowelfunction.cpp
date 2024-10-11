#include <iostream>
#include <string>
using namespace std;

// Function to delete all vowels from the string
string deleteVowels(string str) {
    string result = "";
    for (char c : str) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    return result;
}

int main() {
    string inputString;
    
    // Input the string
    cout << "Enter a string: ";
    getline(cin, inputString);
    
    // Call the deleteVowels function and display the result
    cout << "String after deleting vowels: " << deleteVowels(inputString) << endl;
    return o;
}
