// Include necessary libraries
#include <iostream>     // Input/output stream library
#include <fstream>      // File handling library
#include <cmath>       // Mathematical functions library

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;  // File output stream variable
    double h, x1, f, f1, df, f2, x2;  // Variables for calculations
    int x;               // Input variable

    // Prompt user for input
    cout << "Enter a value for x: ";
    cin >> x;

    // Perform numerical differentiation using forward difference formula
    for (double h = 0.05; h <= 0.5; h = h + 0.05)
    {
        // Calculate x1 and x2 for current step size
        x1 = x + h;
        x2 = x - h;

        // Compute function values
        f2 = x2 * exp(x2);
        f1 = x1 * exp(x1);

        // Calculate derivative using forward difference formula
        df = (0.5 / h) * (f1 - f2);

        // Output results
        cout << h << "\t" << df << endl;
        
        // Write result to file
        myfile << df << endl;
    }

    // Close the output file
    myfile.close();

    return 0;
}





// 2xy+6x+(x2-4)y'=0
