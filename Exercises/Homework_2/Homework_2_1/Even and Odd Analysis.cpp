#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    int a, c, d, e, i, j;
    
    // Initialize counters
    j = 0;
    i = 0;

    // Label for the loop
    name_1: cout << "Hello! Please enter the number of your numbers... Then enter your numbers specifically. " << endl;
    cin >> a;

    // Check if the number of inputs is valid (at least 1)
    if (a >= 1)
    {
        // Loop through the number of inputs
        for (int b = 0; b < a; b++)
        {
            // Read each number
            cin >> c;
            
            // Find the remainder when divided by 2
            d = c % 2;
            
            // Check if the number is even
            if (d == 0)
            {
                i++; // Increment even counter
            }
            else if (d != 0)
            {
                j++; // Increment odd counter
            }
            else if (c == 1 || c == -1)
            {
                j++; // Count 1 and -1 as odd numbers
            }
            else
            {
                cout << "Dear dude! The thing that you entered (whole or some of them) is not even a number! " << endl;
            }
            
            e = b + 1; // Keep track of how many numbers have been processed
        }
        
        // Display results
        cout << "The number of your numbers was:  " << e << endl;
        cout << "The number of even numbers is:   " << i << endl;
        cout << "The number of odd numbers is:    " << j << endl;
    }
    else
    {
        // Handle invalid input (less than 1)
        cout << "Please enter AT LEAST '1' number to have some results. " << endl;
        goto name_1; // Jump back to the loop prompt
    }

    return 0;
}
