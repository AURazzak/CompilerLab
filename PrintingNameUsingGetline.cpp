#include <bits/stdc++.h>  // This includes all standard libraries in C++ for faster coding
using namespace std;       // This allows us to avoid writing 'std::' before standard C++ functions

int main()                 // Main function where execution starts
{
    string name;           // Declare a string variable 'name' to store the user's input
    cout << "Enter Your Name: ";  // Print a message to the user asking for their name

    getline(cin, name);     // 'getline' is used to take the entire line of input (including spaces) and store it in 'name'

    cout << "My Name is: " << name << endl;  // Output the string stored in 'name' to the console

    return 0;              // Return 0 to indicate successful program termination
}

