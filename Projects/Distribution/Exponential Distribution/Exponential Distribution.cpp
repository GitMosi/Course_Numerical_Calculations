// Include necessary libraries
#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;  // File output stream variable
    double x, y, s;   // Variables for storing generated values
    int i;            // Loop counter

    // Seed the random number generator
    srand(time(0));

    // Prompt user for input
    cout << "Enter a value for s: ";
    cin >> s;

    // Generate and write 101 random numbers to the file
    for(i = 0; i <= 100; i++)
    {
        // Generate a random number between 0 and 1
        x = ((double)rand() / RAND_MAX);
        
        // Calculate y using the inverse cumulative distribution function
        y = -((1/s) * log(1 - s * x));

        // Set precision to 6 decimal places for output
        cout << setprecision(6) << x << "\t" << y << endl;
        
        // Write x and y values to the file
        myfile << setprecision(6) << x << "\t" << y << endl;
    }

    // Close the output file
    myfile.close();

    return 0;
}
