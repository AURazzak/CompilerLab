#include <bits/stdc++.h>   // Includes all standard libraries in C++
using namespace std;       // Uses the standard namespace to avoid prefixing 'std::'

int main()                 // Main function, program execution starts here
{
    string str;            // Declare a string variable to store user input

    cout << "Enter the String:"; // Prompt the user to enter a string
    cin >> str;            // Take the input string from the user and store it in 'str'

    // Loop through each character of the string
    for (int i = 0; i < str.length(); i++)
    {
        // Check if the character is an alphabet letter and not 'z' or 'Z'
        if (isalpha(str[i]) && str[i] != 'z' && str[i] != 'Z')
        {
            str[i] = str[i] + 1;  // Move the character to the next letter in the alphabet
        }
        // If the character is 'z', wrap around to 'a'
        else if (str[i] == 'z')
        {
            str[i] = 'a';
        }
        // If the character is 'Z', wrap around to 'A'
        else if (str[i] == 'Z')
        {
            str[i] = 'A';
        }
    }

    cout << "Reverse String: " << str; // Output the modified string
}
