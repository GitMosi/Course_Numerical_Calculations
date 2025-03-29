// Include necessary libraries
#include <iostream>
#include <cmath>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    double sum, sum_2, a, b, n, h, f, x, x_a, x_b;
    
    // Read input from user
    cin >> a >> b >> n;

    // Calculate step size (width of each subinterval)
    h = (b - a) / n;

    // Initialize sum
    sum = 0;

    // Calculate x_a and x_b
    x_a = pow(a, 3);
    x_b = pow(b, 3);

    // Perform numerical integration
    for(int i = 0; i < n; i++)
    {
        x = a + (i * h);
        f = pow(x, 3);
        sum += f * h;
    }

    // Apply Simpson's rule for improved accuracy
    sum_2 = sum + ((x_a + x_b) * h / 2);

    // Output result
    cout << sum_2 << endl;

    return 0;
}
