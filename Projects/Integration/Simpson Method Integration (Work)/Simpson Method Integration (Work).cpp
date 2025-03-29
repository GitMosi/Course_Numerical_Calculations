// Include necessary libraries
#include <iostream>
#include <cmath>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    double sum, sum_1_1, sum_2_1, sum_1_2, sum_2_2, a, b, n, h, f, x, x_a, x_b;
    
    // Prompt user input
    cout << "Please enter the 'smallest' number of range you want: ";
    cin >> a;
    cout << "Please enter the 'largest' number of range you want: ";
    cin >> b;
    cout << "Please enter the number of 'parts' you want: ";
    cin >> n;

    // Calculate step size (width of each subinterval)
    h = (b - a) / n;

    // Initialize sums
    sum_1_1 = 0;
    sum_2_1 = 0;
    sum_1_2 = 0;
    sum_2_2 = 0;

    // Calculate x_a and x_b
    x_a = sqrt(2 + a);
    x_b = sin(b);

    // Perform Riemann-Stieltjes integration
    for(int i = 0; i < n; i++)
    {
        x = a + (i * h);

        if (x >= 0)
        {
            // For x >= 0, integrate sin(x)
            if (i % 2 == 0)
                sum_1_1 += 2 * sin(x);
            else
                sum_1_2 += 4 * sin(x);
        }
        else
        {
            // For x < 0, integrate sqrt(2+x)
            if (i % 2 == 0)
                sum_2_1 += 2 * sqrt(2 + x);
            else
                sum_2_2 += 4 * sqrt(2 + x);
        }
    }

    // Calculate final sum using trapezoidal rule
    sum = (sum_1_1 + sum_1_2 + sum_2_1 + sum_2_2 + x_a + x_b) * h / 3;

    // Output results
    cout << "Sum of integrand over n intervals: " << sum << endl;
    cout << "Sum_1_1: " << sum_1_1 << endl;
    cout << "Sum_1_2: " << sum_1_2 << endl;
    cout << "Sum_2_1: " << sum_2_1 << endl;
    cout << "Sum_2_2: " << sum_2_2 << endl;

    return 0;
}
