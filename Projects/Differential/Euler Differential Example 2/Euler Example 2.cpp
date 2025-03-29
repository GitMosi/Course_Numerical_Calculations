#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double x, h, f, a, b, n, y0, y;

    // Set parameters
    a = 0;
    b = 1.0;
    h = 0.2;
    n = (b - a) / h;

    y0 = 0; // Initial condition

    // Simulate for n steps
    for (int i = 1; i <= n; i++)
    {
        // Calculate current x
        x = a + (i * h);

        // Define the function f(x) = 1 + y^2
        f = 1 + pow(y0, 2);
        
        // Euler method for numerical integration
        y = y0 + (h * f);

        // Print results
        cout << x << "\t" << y << endl;
        myfile << x << "\t" << y << endl;

        // Update y0 for next iteration
        y0 = y;
    }

    myfile.close();
    return 0;
}





// 2xy+6x+(x2-4)y'=0
