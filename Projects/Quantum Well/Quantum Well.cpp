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
    double fa, fb, fc, xa, xb, xc, t, landa;
    landa = 10;  // Constant parameter
    cin >> xa >> xb;  // Read initial interval from user

    while ((xb - xa) >= 0.00000001)  // Continue until interval is small enough
    {
        // Calculate midpoint
        xc = (xa + xb) / 2;

        // Evaluate function at endpoints and midpoint
        fa = tan(xa) - sqrt(landa - pow(xa, 2)) / xa;
        fb = tan(xb) - sqrt(landa - pow(xb, 2)) / xb;
        fc = tan(xc) - sqrt(landa - pow(xc, 2)) / xc;

        // Check if root is found
        t = fa * fc;
        
        if (t == 0)
        {
            cout << xc << endl;
            break;
        }
        else if (t > 0) xa = xc;
        else          xb = xc;

        // Set precision for output
        cout.setf(ios::fixed);
        cout.precision(8);
        cout << xc << endl;
    }

    // Print final result
    cout << xc << endl;

    // Close file stream
    myfile.close();

    return 0;
}
