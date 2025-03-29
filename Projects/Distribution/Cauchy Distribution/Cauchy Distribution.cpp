// Include necessary libraries
#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;  // File output stream variable
    double x, y;       // Variables for storing generated values
    
    // Seed the random number generator
    srand(time(0));

    // Generate and write 10,000 random numbers to the file
    for(int i = 0; i <= 10000; i++)
    {
        // Generate a random number between 0 and RAND_MAX
        x = ((double)rand() / RAND_MAX);
        
        // Calculate y using the tangent function
        y = tan(3.1415 * x / 2);
        
        // Write x and y values to the file
        myfile << x << "\t" << y << endl;
    }

    // Close the output file
    myfile.close();

    return 0;
}
