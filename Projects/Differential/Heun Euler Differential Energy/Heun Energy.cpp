#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double x, h, a, b, n, x0, v, phi, u, t, K, U, E, x_new, v_new, v0, f1, f2, f1_new, f2_new, phi1, phi2;

    // Set parameters
    a = 0;
    b = 6;
    h = 0.1;
    n = (b - a) / h;

    x0 = 0;
    v0 = 1;

    // Simulate for n steps
    for (int i = 1; i <= n; i++)
    {
        // Calculate current time
        t = a + (i * h);

        // First-order Euler method for velocity
        f1 = -x0;
        v = v0 + (h * f1);

        // Second-order Euler method for position
        f2 = v0;
        x = x0 + (h * f2);

        // Improved approximations
        f1_new = -x;
        f2_new = v;

        phi1 = (0.5) * (f1 + f1_new);
        phi2 = (0.5) * (f2 + f2_new);

        // Updated position and velocity
        x_new = x0 + (h * phi2);
        v_new = v0 + (h * phi1);

        // Calculate kinetic energy, potential energy, and total energy
        K = 0.5 * pow(v_new, 2);
        U = 0.5 * pow(x_new, 2);
        E = K + U;

        // Print results
        cout << t << "\t" << K << "\t" << U << "\t" << E << endl;
        myfile << t << "\t" << K << "\t" << U << "\t" << E << endl;

        // Update variables for next iteration
        v0 = v_new;
        x0 = x_new;
    }

    myfile.close();
    return 0;
}





// 2xy+6x+(x2-4)y'=0
