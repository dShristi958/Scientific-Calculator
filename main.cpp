#include <iostream>
#include <cmath>

using namespace std;

// Function to display menu
void displayMenu() {
    cout << "\nScientific Calculator\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Sine (sin)\n";
    cout << "6. Cosine (cos)\n";
    cout << "7. Tangent (tan)\n";
    cout << "8. Logarithm (ln)\n";
    cout << "9. Logarithm Base 10 (log10)\n";
    cout << "10. Exponential (exp)\n";
    cout << "11. Power (x^y)\n";
    cout << "12. Square Root (sqrt)\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!\n";
                }
                break;
            case 5: // Sine
                cout << "Enter angle in radians: ";
                cin >> num1;
                result = sin(num1);
                cout << "Result: " << result << endl;
                break;
            case 6: // Cosine
                cout << "Enter angle in radians: ";
                cin >> num1;
                result = cos(num1);
                cout << "Result: " << result << endl;
                break;
            case 7: // Tangent
                cout << "Enter angle in radians: ";
                cin >> num1;
                result = tan(num1);
                cout << "Result: " << result << endl;
                break;
            case 8: // Natural Logarithm
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Logarithm of non-positive number!\n";
                }
                break;
            case 9: // Log Base 10
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log10(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Logarithm of non-positive number!\n";
                }
                break;
            case 10: // Exponential
                cout << "Enter a number: ";
                cin >> num1;
                result = exp(num1);
                cout << "Result: " << result << endl;
                break;
            case 11: // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 12: // Square Root
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Square root of negative number!\n";
                }
                break;
            case 0:
                cout << "Exiting calculator. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
