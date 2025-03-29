#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double x, h, f, a, b, n, y0, y, g, y_new;

    // Set parameters
    a = 0;
    b = 5;
    h = 0.1;
    n = (b - a) / h;

    y0 = 1;

    // Simulate for n steps
    for (int i = 1; i <= n; i++)
    {
        // Calculate current x
        x = a + (i * h);

        // First-order Euler method
        f = y0;
        y = y0 + (0.5 * h * f);

        // Second-order Euler method
        g = y;
        y_new = y0 + (h * g);

        // Print results
        cout << x << "\t" << y_new << endl;
        myfile << x << "\t" << y_new << endl;

        // Update y0 for next iteration
        y0 = y_new;
    }

    myfile.close();
    return 0;
}





// 2xy+6x+(x2-4)y'=0
