// Include necessary libraries
#include <iostream>
#include <cmath>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    double a, b, h, x, f, sum;
    int n;
    
    // Initialize sum to 0
    sum = 0;

    // Read input from user
    cin >> a >> b >> n;

    // Calculate step size (width of each subinterval)
    h = (b - a) / n;

    // Perform Riemann sum integration
    for(int i = 0; i < n; i++)
    {
        // Calculate x-coordinate of midpoint in current interval
        x = a + (i * h);
        
        // Calculate function value (x^3 in this case)
        f = pow(x, 3);
        
        // Add contribution of current interval to sum
        sum += h * f;
    }

    // Output results
    cout << "Sum of integrand over n intervals: " << sum << endl;

    return 0;
}
