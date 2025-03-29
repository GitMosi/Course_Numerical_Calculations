#include <iostream>
#include <cmath>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    // Open a file stream to write output
    ofstream myfile;
    myfile.open("Random.txt");

    // Declare variables
    double fa, fb, fc, da, db, dc, t;
    
    // Read initial interval from user input
    cin >> fa >> fb;

    // Perform bisection method until the interval is small enough
    while ((db - da) >= 0.00000001)
    {
        // Calculate midpoint
        dc = (da + db) / 2;

        // Evaluate function at endpoints and midpoint
        fa = 0.4*30*da + 0.5*30*pow(da,2) - 0.95*9.81*da - 0.95*9.81*0.43;
        fb = 0.4*30*db + 0.5*30*pow(db,2) - 0.95*9.81*db - 0.95*9.81*0.43;
        fc = 0.4*30*dc + 0.5*30*pow(dc,2) - 0.95*9.81*dc - 0.95*9.81*0.43;

        // Check if root is found
        t = fa * fc;
        
        if (t == 0)
        {
            cout << dc << endl;
            break;
        }
        else if (t > 0) da = dc;
        else          db = dc;

        // Set precision for output
        cout.setf(ios::fixed);
        cout.precision(8);

        // Print current estimate of root
        cout << dc << endl;
    }

    // Print final result
    cout << dc << endl;

    // Close file stream
    myfile.close();

    return 0;
}
