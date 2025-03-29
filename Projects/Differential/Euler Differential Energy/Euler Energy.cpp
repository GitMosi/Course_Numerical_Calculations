#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double x, h, f, a, b, n, v0, v, t, K, U, E, x0, f1;

    // Set parameters
    a = 0;
    b = 6;
    h = 0.01;
    n = (b - a) / h;

    x0 = 0;
    v0 = 1;

    // Simulate for n steps
    for (int i = 1; i <= n; i++)
    {
        // Calculate current time
        t = a + (i * h);

        // Constants for kinetic energy and potential energy equations
        f = -x0;
        v = v0 + (h * f);
        f1 = v0;
        x = x0 + (h * f1);

        // Calculate kinetic energy (K = 0.5mv^2)
        K = 0.5 * pow(v, 2);

        // Calculate potential energy (U = 0.5kx^2)
        U = 0.5 * pow(x, 2);

        // Total energy (E = K + U)
        E = K + U;

        // Print results
        cout << t << "\t" << K << "\t" << U << "\t" << E << endl;
        myfile << t << "\t" << K << "\t" << U << "\t" << E << endl;

        // Update variables for next iteration
        x0 = x;
        v0 = v;
    }

    myfile.close();
    return 0;
}





// 2xy+6x+(x2-4)y'=0
