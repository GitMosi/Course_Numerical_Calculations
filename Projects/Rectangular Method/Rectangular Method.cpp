#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    double a, b, h, x, f, sum;
    int n;
    
    sum = 0;  // Initialize sum to zero
    
    // Read input from user
    cin >> a >> b >> n;
    
    // Calculate width of subinterval
    h = (b - a) / n;

    // Perform Riemann sum approximation
    for(int i = 0; i < n; i++)
    {
        // Calculate x value for this subinterval
        x = a + (i * h);
        
        // Calculate function value at x
        f = pow(x, 3);
        
        // Add contribution of this rectangle to sum
        sum += h * f;
    }

    // Print results
    cout << "Function value: " << f << endl;
    cout << "Sum approximation: " << sum << endl;

    return 0;
}
