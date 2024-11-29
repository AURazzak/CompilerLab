#include <iostream>  // Include the input-output stream library for standard I/O operations
#include <string>    // Include the string library to use the string data type
using namespace std; // Use the standard namespace to avoid prefixing with 'std::'

int main()   // Main function where the program execution starts
{
    string inputString, reversedString; // Declare two string variables: one for input and one for the reversed result

    cout << "Enter a string: "; // Prompt the user to enter a string
    getline(cin, inputString); // Read a full line of input from the user and store it in 'inputString'

    // Loop to reverse the string
    for (int i = inputString.length() - 1; i >= 0; i--)   // Start from the last character and go to the first
    {
        reversedString += inputString[i]; // Append each character to 'reversedString'
    }

    cout << "Reversed string: " << reversedString << endl; // Output the reversed string to the console

    return 0; // Return 0 to indicate successful execution of the program
}
