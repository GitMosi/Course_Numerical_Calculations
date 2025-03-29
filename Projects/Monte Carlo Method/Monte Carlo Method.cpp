#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    // Declare variables
    double A, N, a, b, f, n, h, Np, Ns, pi, x, y;

    // Read the number of iterations from user input
    cin >> N;

    // Set constants
    A = 4;
    Np = 0;
    Ns = 0;

    // Perform Monte Carlo simulation
    for (int i = 0; i < N; i++)
    {
        // Generate random x and y coordinates
        x = ((double)rand() / RAND_MAX) * 2 - 1;
        y = ((double)rand() / RAND_MAX) * 2 - 1;

        // Calculate distance from origin
        f = sqrt(pow(x, 2) + pow(y, 2));

        // Check if point is inside unit circle
        if (f <= 1)
            Np++;  // Count points inside circle
        else
            Ns++;  // Count points outside circle

        // Calculate pi estimate
        pi = (Np / N) * A;
    }

    // Print results
    cout << "Estimated Pi: " << pi << endl;
    cout << "Points inside circle: " << Np << endl;
    cout << "Points outside circle: " << Ns << endl;

    return 0;
}
