#include <iostream>  // Include the input-output stream library
using namespace std;  // Allows the use of standard namespace to avoid prefixing with 'std::'

int main()  // The main function where the program starts execution
{
    int num1, num2;  // Declare two integer variables to store user input numbers
    int choice;  // Declare an integer variable to store the user's choice of operation

loop:  // Label to mark the beginning of the loop

    // Prompting the user to enter two numbers
    cout << "Enter the first number: ";  // Request the first number from the user
    cin >> num1;  // Store the input value into num1
    cout << "Enter the second number: ";  // Request the second number from the user
    cin >> num2;  // Store the input value into num2

    // Displaying a menu of operations for the user to choose from
    cout << "Choose an operation to perform: " << endl;
    cout << "1. Addition" << endl;  // Option for addition
    cout << "2. Subtraction" << endl;  // Option for subtraction
    cout << "3. Multiplication" << endl;  // Option for multiplication
    cout << "4. Division" << endl;  // Option for division
    cout << "5. Exit" << endl;  // Option to exit the program
    cin >> choice;  // Read the user's choice and store it in the variable 'choice'

    // Perform an action based on the user's choice
    switch (choice)  // 'switch' statement to select an operation based on 'choice'
    {
    case 1:  // If choice is 1 (Addition)
        cout << "Result (Addition): " << num1 + num2 << endl;  // Output the sum of num1 and num2
        break;  // Exit the switch statement after executing the addition case
    case 2:  // If choice is 2 (Subtraction)
        cout << "Result (Subtraction): " << num1 - num2 << endl;  // Output the result of num1 minus num2
        break;  // Exit the switch statement after executing the subtraction case
    case 3:  // If choice is 3 (Multiplication)
        cout << "Result (Multiplication): " << num1 * num2 << endl;  // Output the product of num1 and num2
        break;  // Exit the switch statement after executing the multiplication case
    case 4:  // If choice is 4 (Division)
        if (num2 != 0)  // Check if the second number is not zero to avoid division by zero
        {
            cout << "Result (Division): " << num1 / num2 << endl;  // Output the result of num1 divided by num2
        }
        else  // If num2 is zero, output an error message
        {
            cout << "Division by zero!" << endl;  // Display an error message
        }
        break;  // Exit the switch statement after executing the division case
    case 5:  // If choice is 5 (Exit)
        cout << "Exiting the program" << endl;  // Display an exit message
        return 0;  // Exit the program with a success status code
    default:  // If the user enters an invalid choice
        cout << "Invalid choice, please try again!" << endl;  // Output an error message
        break;  // Exit the switch statement after handling invalid input
    }

    goto loop;  // Go back to the label 'loop' to repeat the process (infinite loop until the user chooses to exit)

    return 0;  // Return 0 to indicate successful execution of the program
}

