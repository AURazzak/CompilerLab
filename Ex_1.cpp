#include <iostream>
#include <string>
using namespace std;

int main() {
    string expression;
    cout << "Enter a mathematical expression (e.g., 4+7*3): ";
    cin >> expression; // Take input as a string

    int result = 0, num = 0;
    char op = '+'; // Default operator

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch >= '0' && ch <= '9') { // Check if the character is a digit
            num = num * 10 + (ch - '0'); // Build the number
        } else {
            // Process the previous operator
            if (op == '+') result += num;
            else if (op == '-') result -= num;
            else if (op == '*') result *= num;
            else if (op == '/') result /= num;

            op = ch;  // Update the operator
            num = 0;  // Reset the current number
        }
    }

    // Apply the last number
    if (op == '+') result += num;
    else if (op == '-') result -= num;
    else if (op == '*') result *= num;
    else if (op == '/') result /= num;

    cout << "The result is: " << result << endl;
    return 0;
}
