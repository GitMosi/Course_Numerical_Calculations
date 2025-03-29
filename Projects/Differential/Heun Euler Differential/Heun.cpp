#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double x, h, f1, a, b, n, y0, y, f2, phi, u;

    // Set parameters
    a = 0;
    b = 8;
    h = 0.1;
    n = (b - a) / h;

    y0 = 1; // Initial condition

    // Simulate for n steps
    for (int i = 1; i <= n; i++)
    {
        // Calculate current x
        x = a + (i * h);

        // First-order Euler method
        f1 = y0;
        y = y0 + (h * f1);

        // Second-order Euler method
        f2 = y;

        // Average of first and second order approximations
        phi = (0.5) * (f1 + f2);
        
        // Improved approximation using average
        u = y0 + (h * phi);

        // Print results
        cout << x << "\t" << u << endl;
        myfile << u << endl;

        // Update y0 for next iteration
        y0 = u;
    }

    myfile.close();
    return 0;
}





// 2xy+6x+(x2-4)y'=0
