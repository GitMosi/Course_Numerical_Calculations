// Include necessary libraries
#include <iostream>
#include <cmath>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    double a, b, h, x, x_a, x_b, f, sum, sum_2;
    int n;
    
    // Initialize sum
    sum = 0;

    // Prompt user input
    cout << "Please enter 0 as 'a':";
    cin >> a;
    cout << "Please enter 1 as 'b':";
    cin >> b;
    cout << "Please enter 100000000 as 'n' or else:";
    cin >> n;

    // Convert angles to radians
    x_a = a * 3.14159 / 180;
    x_b = b * 3.14159 / 180;

    // Calculate step size (width of each subinterval)
    h = (b - a) / n;

    // Perform Simpson's rule integration
    for(int i = 0; i < n; i++)
    {
        x = a + (i * h);
        x = x * 3.14159 / 180;
        f = x * sin(pow(x, 2));
        sum += f * h;
    }

    // Apply Simpson's rule correction
    sum_2 = sum + (h / 2 * (x_a + x_b));

    // Output results
    cout << "f(" << b << ") = " << f << endl;
    cout << "Total sum is: " << sum_2 << endl;
    cout << "The Real Answer is: 7.62*10^-5" << endl;

    return 0;
}
