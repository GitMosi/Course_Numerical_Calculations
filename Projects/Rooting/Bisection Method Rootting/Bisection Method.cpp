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
    double fa, fb, fc, xa, xb, xc, t;
    
    // Read initial interval from user input
    cin >> xa >> xb;

    // Perform bisection method until the interval is small enough
    while ((xb - xa) >= 0.00000001)
    {
        // Calculate midpoint
        xc = (xa + xb) / 2;

        // Evaluate function at endpoints and midpoint
        fa = pow(xa, 4) - (9 * pow(xa, 3)) - (2 * pow(xa, 2)) + (120 * xa) - 130;
        fb = pow(xb, 4) - (9 * pow(xb, 3)) - (2 * pow(xb, 2)) + (120 * xb) - 130;
        fc = pow(xc, 4) - (9 * pow(xc, 3)) - (2 * pow(xc, 2)) + (120 * xc) - 130;

        // Check if root is found
        t = fa * fc;
        
        if (t == 0)
        {
            cout << xc << endl;
            break;
        }
        else if (t > 0)
            xa = xc;
        else
            xb = xc;

        // Set precision for output
        cout.setf(ios::fixed);
        cout.precision(8);

        // Print current estimate of root
        cout << xc << endl;
    }

    // Print final result
    cout << xc << endl;

    // Close file stream
    myfile.close();

    return 0;
}
