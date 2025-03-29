#include<iostream> // Include the iostream standard library for input/output operations

using namespace std; // Use the standard namespace to avoid prefixing standard library elements with 'std::'

int main() { // Main function where program execution begins

    short int a,b; // Declare two short integer variables
    a = 65535; // Assign the maximum value for short integer (32767) to variable 'a'
    b = a + 2; // Add 2 to the value of 'a' and store the result in 'b'
    cout << b << endl; // Print the value of 'b' to the console
    
    return 0; // Return 0 to indicate successful program execution
}
