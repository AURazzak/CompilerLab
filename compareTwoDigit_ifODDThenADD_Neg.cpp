#include<bits/stdc++.h> //This includes all standard libraries in C++ for faster coding
using namespace std;    // Uses the standard namespace to avoid prefixing 'std::' with each usage
int main()              // Main function where program execution begins
{
    string str, str2;   // Declare two string variables: 'str' for input and 'str2' for the output

    cout << "Enter the String:"; // Display a prompt asking the user to enter a string
    cin >> str;                  // Take input from the user and store it in 'str'

    // Loop through each character in the input string 'str'
    for (int i = 0; i < str.length(); i++)
    {
        str2 += str[i];   // Append the current character from 'str' to 'str2'

        // Check if the current character and the next character are both odd digits
        // (i < str.length() - 1): Ensures we don’t go out of bounds when accessing str[i + 1]
        // (str[i] % 2 != 0): Checks if str[i] is an odd digit by converting it to an integer
        // (str[i + 1] % 2 != 0): Checks if the next character is also an odd digit

        if (i < str.length() - 1 && (str[i] % 2 != 0) && (str[i + 1] % 2 != 0))
        {
            str2 += '-';  // If both the current and next characters are odd, add a '-' to 'str2'
        }
    }

    cout << "String is Now: " << str2 << endl;  // Output the modified string with dashes between consecutive odd digits

    return 0;   // End of program; returns 0 to indicate successful execution
}
