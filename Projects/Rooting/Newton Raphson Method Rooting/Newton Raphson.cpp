#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    // Open a file stream to write output
    ofstream myfile;
    myfile.open("new.txt");

    // Declare variables
    double f0, df, fc, xa, f_new, x_new, t, x0;
    // landa=10;  // Commented out line

    // Read initial guess from user input
    cin >> x0;

    do
    {
        // Newton-Raphson formula
        x_new = x0 - (f0 / df);

        // Update function values
        f_new = exp(-x_new) - x_new + 3;

        // Check for convergence
        if (abs(f_new) <= 0.0000001)
        {
            cout << "root: " << x_new;
            break;
        }
        else
            x0 = x_new;

        // Set precision for output
        cout.setf(ios::fixed);
        cout.precision(8);
        cout << x0 << endl;

        // Reset x_new for next iteration
        x_new = 0;
    } while (abs(x_new - x0) >= 0.00000001);

    // Print final result
    cout << "root= " << x0 << endl;

    // Close file stream
    myfile.close();

    return 0;
}
