#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    int i, j, d, g, h;
    double a, b, c, x, pi, taylor_series_1, taylor_series_2;
    taylor_series_2 = 0;
    pi = 3.14159265;
    i = 1;
    d = 3;
    h = 1;

    // Prompt user for input
    cout << "Please enter a number as a 'degree'! " << endl;
    cin >> a;

    // Adjust negative angles to positive
    if (a >= 180)
    {
        while (a >= 180)
        {
            a -= 180;
        }
        a = -a;
    }
    cout << a << endl;
    x = a * pi / 180;

    // Calculate factorial and denominator for Taylor series
    g = d * (d - 2) * (d - 1);
    h = h * g;

    // Determine which quadrant the angle is in
    if (a >= -45 && a <= 45)
    {
        // First quadrant (0 to 90 degrees)
        for (c = 3; c <= 9; c += 2)
        {
            i++;
            j = i % 2;
            taylor_series_1 = pow(x, c) / h;
            cout << setprecision(8) << "The Nomial " << i << " is: " << taylor_series_1 << endl;

            // Add or subtract term based on odd/even index
            if (j != 0)
            {
                taylor_series_2 += taylor_series_1;
            }
            else if (j == 0)
            {
                taylor_series_2 -= taylor_series_1;
            }

            taylor_series_2 = taylor_series_2;
            g = 0;
            d += 2;
            g = d * (d - 1);
            h = h * g;
            cout << h << endl;
        }
    }
    // Similar logic for other quadrants (90 to 180, -90 to 0)

    // Display final Taylor series approximation
    taylor_series_2 += x;
    cout << setprecision(8) << "The 'Taylor Series'=    " << taylor_series_2 << endl;

    // Compare with actual sine value
    cout << setprecision(8) << "The 'sin(x)'=   " << sin(x) << endl;

    return 0;
}
