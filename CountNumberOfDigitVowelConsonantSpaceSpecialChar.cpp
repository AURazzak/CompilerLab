#include<bits/stdc++.h>  // Include all standard libraries for C++
using namespace std;  // Use the standard namespace to avoid prefixing with 'std::'

int main()  // Main function where execution starts
{
    string stringname;  // Declare a string variable to store the user's input string
    int digit = 0,  // Initialize a counter for digits
        vowel = 0,  // Initialize a counter for vowels
        consonant = 0,  // Initialize a counter for consonants
        spchar = 0,  // Initialize a counter for special characters
        space = 0;  // Initialize a counter for spaces

    cout << "Enter the string value: ";  // Prompt the user to enter a string
    getline(cin, stringname);  // Read the entire input line, including spaces, and store it in 'stringname'

    for (int i = 0; i < stringname.length(); i++)  // Loop through each character of the input string
    {
        char ch = stringname[i];  // Extract the current character from the string

        if (ch >= '0' && ch <= '9')  // Check if the character is a digit
        {
            digit++;  // Increment the digit counter
        }
        else if (ch == ' ')  // Check if the character is a space
        {
            space++;  // Increment the space counter
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))  // Check if the character is an alphabet letter
        {
            char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;  // Convert uppercase letters to lowercase for consistent checking

            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')  // Check if the letter is a vowel
            {
                vowel++;  // Increment the vowel counter
            }
            else  // If it's not a vowel, it must be a consonant
            {
                consonant++;  // Increment the consonant counter
            }
        }
        else  // If the character is neither a digit, space, nor letter, it must be a special character
        {
            spchar++;  // Increment the special character counter
        }
    }

    cout << "Number of digits: " << digit << endl;  // Output the total count of digits to the console
    cout << "Number of vowels: " << vowel << endl;  // Output the total count of vowels to the console
    cout << "Number of consonants: " << consonant << endl;  // Output the total count of consonants to the console
    cout << "Number of spaces: " << space << endl;  // Output the total count of spaces to the console
    cout << "Number of special characters: " << spchar << endl;  // Output the total count of special characters to the console
    return 0;  // Return 0 to indicate successful completion of the program
}
