#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    double sum, sum_1_1, sum_2_1, sum_1_2, sum_2_2, a, b, n, h, f, x, x_a, x_b;
    
    // Prompt user for input
    cout << "Please enter the 'smallest' number of range you want. " << endl;
    cin >> a;
    cout << "Please enter the 'largest' number of range you want. " << endl;
    cin >> b;
    cout << "Please enter the number of 'parts' you want. " << endl;
    cin >> n;

    // Calculate width of each part
    h = (b - a) / n;

    // Initialize sums
    sum = 0;
    sum_1_1 = 0;
    sum_2_1 = 0;
    sum_1_2 = 0;
    sum_2_2 = 0;

    // Calculate x_a and x_b
    x_a = sqrt(2 + a);
    x_b = sin(b);

    // Display initial values
    cout << "x_a= " << x_a << "\t" << "x_b= " << x_b << endl;

    // Main calculation loop
    for(int i = 0; i < n; i++)
    {
        // Calculate x for each iteration
        x = a + (i * h);

        // Check if x is greater than or equal to 0
        if (x >= 0)
        {
            // For even indices, calculate f(x) = sin(x), multiply by 2 and add to sum_1_1
            if (i % 2 == 0)
            {
                f = sin(x);
                sum_1_1 += 2 * f;
            }
            // For odd indices, calculate f(x) = sin(x), multiply by 4 and add to sum_1_2
            else
            {
                f = sin(x);
                sum_1_2 += 4 * f;
            }
        }
        else if (x < 0)
        {
            // For even indices, calculate f(x) = sqrt(2+x), multiply by 2 and add to sum_2_1
            if (i % 2 == 0)
            {
                f = sqrt(2 + x);
                sum_2_1 += 2 * f;
            }
            // For odd indices, calculate f(x) = sqrt(2+x), multiply by 4 and add to sum_2_2
            else
            {
                f = sqrt(2 + x);
                sum_2_2 += 4 * f;
            }
        }
    }

    // Calculate final sum using Simpson's rule
    sum = (sum_1_1 + sum_1_2 + sum_2_1 + sum_2_2 + (x_a + x_b)) * h / 3;

    // Display results
    cout << "sum_1_1= " << sum_1_1 << endl;
    cout << "sum_1_2= " << sum_1_2 << endl;
    cout << "sum_2_1= " << sum_2_1 << endl;
    cout << "sum_2_2= " << sum_2_2 << endl;
    cout << "sum= " << sum << endl;

    return 0;
}
