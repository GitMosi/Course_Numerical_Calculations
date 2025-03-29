// Include necessary libraries
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <math.h>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;  // File output stream variable
    double x_1, x_2, y_1, y_2, sigma;  // Variables for storing generated values
    int i;  // Loop counter

    // Seed the random number generator
    srand((time(0)));

    // Prompt user for input
    cout << "Please enter a value for sigma!" << endl;
    cin >> sigma;

    // Generate and write 10,001 random numbers to the file
    for (i = 0; i <= 10000; i++)
    {
        // Generate two random numbers between 0 and RAND_MAX
        x_1 = ((double)rand() / RAND_MAX);
        x_2 = ((double)rand() / RAND_MAX);

        // Calculate y values using the inverse cumulative distribution function
        y_1 = sqrt(-2 * sigma * log(x_1)) * cos(2 * 3.1415 * x_2);
        y_2 = sqrt(-2 * sigma * log(x_2)) * cos(2 * 3.1415 * x_1);

        // Write x and y values to the file
        myfile << x_1 << "\t" << y_1 << "\t" << x_2 << "\t" << y_2 << endl;
    }

    // Print RAND_MAX
    cout << RAND_MAX << endl;

    // Close the output file
    myfile.close();

    return 0;
}
