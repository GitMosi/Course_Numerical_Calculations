// Include necessary libraries
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <math.h>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    double A, N, a, b, f, n, h, Np, Ns, pi, x, y;  // Variables for calculations

    // Read number of iterations from user input
    cin >> N;

    // Constants
    A = 4;
    Np = 0;
    Ns = 0;

    // Generate random points inside and outside a circle
    for (int i = 0; i < N; i++)
    {
        // Generate random x and y coordinates between 0 and 1
        x = ((double)rand() / RAND_MAX);
        y = ((double)rand() / RAND_MAX);

        // Calculate distance from origin (x, y)
        f = sqrt(pow(x, 2) + pow(y, 2));

        // Check if point is inside the unit circle (radius 1)
        if (f <= 1)
            Np++;  // Increment if point is inside
        else
            Ns++;  // Increment if point is outside

        // Print progress every 1000 iterations (optional)
        if (i % 1000 == 0)
            cout << "Progress: " << i << "/" << N << endl;
    }

    // Calculate pi estimate
    pi = (Np / N) * A;

    // Output results
    cout << "Estimated Pi: " << pi << endl;
    cout << "Points inside circle: " << Np << endl;
    cout << "Total points generated: " << N << endl;
    cout << "Points outside circle: " << Ns << endl;

    return 0;
}
