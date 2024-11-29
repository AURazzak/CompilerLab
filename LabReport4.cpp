#include <bits/stdc++.h>
using namespace std;

// Main function to execute the program
int main() {
    string s; // Declare a string1

    // Read a full line of input
    getline(cin, s);

    int siz = s.size(); // Get the size (length) of the input string
    string res;         // Declare a string2 `res` to store the results (characters in First set)

    int j = 0;          // Initialize a counter variable

    // Print the start of the output, including the non-terminal symbol and the opening brace
    cout << "First(" << s[0] << ")={";

    // Loop through each character in the input string
    for (int i = 0; i < siz; i++) {
        // Check if the current character is '>', indicating the start of a production
        if (s[i] == '>') {
            res += s[i + 1]; // Add the next character (first symbol of production) to `res`
            j++;             // Increment the counter (not effectively used here)
        }
        // Check if the current character is '|', indicating an alternative production
        else if (s[i] == '|') {
            res += s[i + 1]; // Add the next character (first symbol of this alternative) to `res`
            j++;             // Increment the counter (not effectively used here)
        }
    }

    // Loop through the collected characters in `res` to format and print them
    for (int j = 0; j < res.size(); j++) {
        cout << res[j]; // Print the current character in `res`
        if (j < res.size() - 1) {
            cout << ","; // Print a comma after the character if it's not the last one
        }
    }

    // Print the closing brace for the First set
    cout << "}";

    return 0; // Indicate that the program executed successfully
}


