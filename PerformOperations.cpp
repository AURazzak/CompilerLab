#include <bits/stdc++.h>  // Includes all standard libraries for faster coding
using namespace std;       // Avoids the need to prefix 'std::' before standard C++ functions

int main()                 // Main function where the program starts executing
{
    int num1, num2;        // Declare two integer variables to store the numbers
    int choice;            // Declare an integer variable to store the user's operation choice

    // Asking for the first number from the user
    cout << "Enter the first number: ";  // Prompt the user to enter the first number
    cin >> num1;                         // Read and store the first number in 'num1'

    // Asking for the second number from the user
    cout << "Enter the second number: ";  // Prompt the user to enter the second number
    cin >> num2;                          // Read and store the second number in 'num2'

    // Asking the user to select an arithmetic operation
    cout << "Choose an operation to perform: " << endl;  // Display operation options
    cout << "1. Addition" << endl;       // Option for addition
    cout << "2. Subtraction" << endl;    // Option for subtraction
    cout << "3. Multiplication" << endl; // Option for multiplication
    cout << "4. Division" << endl;       // Option for division
    cin >> choice;                       // Read and store the user's choice in 'choice'

    // Check which operation the user selected and perform the corresponding operation
    if (choice == 1)  // If the user chose 1, perform addition
    {
        cout << "Result(Addition): " << num1 + num2 << endl;  // Output the sum of num1 and num2
    }
    else if (choice == 2)  // If the user chose 2, perform subtraction
    {
        cout << "Result(Subtraction): " << num1 - num2 << endl;  // Output the difference of num1 and num2
    }
    else if (choice == 3)  // If the user chose 3, perform multiplication
    {
        cout << "Result(Multiplication): " << num1 * num2 << endl;  // Output the product of num1 and num2
    }
    else if (choice == 4)  // If the user chose 4, perform division
    {
        if (num2 != 0)  // Check if the second number is not zero to avoid division by zero
        {
            cout << "Result(Division): " << num1 / num2 << endl;  // Output the result of num1 divided by num2
        }
        else  // If num2 is zero, print an error message
        {
            cout << "Division by zero!" << endl;  // Division by zero is not allowed
        }
    }
    else  // If the user chose an invalid option
    {
        cout << "Invalid choice!" << endl;  // Print an error message for invalid operation choice
    }

    return 0;  // Return 0 to indicate successful program termination
}

