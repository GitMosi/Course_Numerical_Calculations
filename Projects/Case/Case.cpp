#include<iostream> // Include the iostream standard library for input/output operations

using namespace std; // Use the standard namespace to avoid prefixing standard library elements with 'std::'

int main() { // Main function where program execution begins

    int a; // Declare an integer variable
    cout << "\t" << "Please enter a number!" << endl; // Prompt user to enter a number
    cin >> a; // Read user input into variable 'a'

    switch(a) { // Start a switch statement based on the value of 'a'
        
        case 1: // If 'a' equals 1
            cout << "\t" << "You won a knife." << endl; // Print this message
            break; // Exit the switch statement
        
        case 2: // If 'a' equals 2
            cout << "\t" << "You won a gun." << endl; // Print this message
            break; // Exit the switch statement
        
        default: // If 'a' is neither 1 nor 2
            cout << "\t" << "You won a ...!" << endl; // Print this message
            break; // Exit the switch statement
    
    } // End of switch statement

    return 0; // Return 0 to indicate successful program execution
}
