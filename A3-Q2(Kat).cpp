#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_OPERATIONS = 100;

int operands1[MAX_OPERATIONS];
int results[MAX_OPERATIONS];

// Function to multiply two numbers using addition
int multiplyUsingAddition(int a, int b);

// Function to display the main menu options
void displayMainMenu();

// Function to perform multiplication
void performMultiplication(int &oc);

// Function to display the results of mathematical operations
void displayResults(int oc);

int main()
{
    int choice, operationCount = 0;
    do
    {
        displayMainMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            performMultiplication(operationCount);
            break;

        case 2:
            displayResults(operationCount);
            break;

        case 3:
            cout << "Goodbye!";
            break;

        default:
            // default case handles input validation
            // for any user input that may be out of bounds
            cout << "Invalid option. Please enter a valid option.\n";
        }

    } while (choice != 3);

    getch();
    return 0;
}

int multiplyUsingAddition(int a, int b)
{
    int result = 0;

    // following for loop multiplies two numbers using repeated addition
    // int a is added b times
    // e.g. 3 * 4 = 3 + 3 + 3 + 3
    for (int i = 0; i < b; ++i)
    {
        result += a;
    }
    return result;
}

void displayMainMenu()
{
    cout << "\n<<<<<Main Menu>>>>>\n"
         << "========================================\n"
         << "1. Perform multiplication\n"
         << "2. Display results\n"
         << "3. Quit\n"
         << "Enter your choice: ";
}

void performMultiplication(int &oc)
{
    int b, a = 1;
    cout << "\nEnter the number of operands for multiplication: ";
    cin >> operands1[oc];

    // following if statement makes sure that user doesn't overflow array
    if ((operands1[oc] < 1) && (operands1[oc] > 100))
    {
        cout << "Please enter a value greater than 1 and less than 100: ";
    }

    // following for loop takes in the operands and multiplies them using multiplyUsingAddition function
    for (int i = 0; i < operands1[oc]; ++i)
    {
        cout << "Enter operand " << i + 1 << ": ";
        cin >> b;

        if (b < 0)
        {
            cout << "Please enter a positive number: ";
            cin >> b;
        }

        a = multiplyUsingAddition(a, b);
    }

    cout << "\nMultiplication performed successfully!\n";

    results[oc] = a;

    ++oc;
}

void displayResults(int oc)
{
    cout << "\nResults of Mathematical Operations:\n"
         << "========================================\n";

    for (int i = 0; i < oc; i++)
    {
        cout << "Operation " << (i + 1) << ": " << results[i] << " (Operands: "
             << operands1[i] << ")\n";
    }
}
