// Include necessary libraries
#include <iostream>
#include <cmath>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    double sum, sum_1, sum_2, a, b, n, h, f, x, x_a, x_b;
    
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
    sum_1 = 0;
    sum_2 = 0;

    // Calculate x_a and x_b
    x_a = sqrt(2 + a);
    x_b = sin(b);

    // Perform Riemann-Stieltjes integration
    for(int i = 0; i < n; i++)
    {
        x = a + (i * h);
        
        if (x >= 0)
        {
			//    x=x*3.1415/180;
            // For x >= 0, integrate sin(x)
            f = sin(x);
            sum_1 += f * h;
        }
        else if (x < 0)
        {
            // For x < 0, integrate sqrt(2+x)
            f = sqrt(2 + x);
            sum_2 += f * h;
        }
    }

    // Apply Simpson's rule correction
    sum = sum_1 + sum_2 + ((x_a + x_b) * h / 2);

    // Output results
    cout << "Sum_1 = " << sum_1 << endl;
    cout << "Sum_2 = " << sum_2 << endl;
    cout << "Total sum = " << sum << endl;

    return 0;
}
