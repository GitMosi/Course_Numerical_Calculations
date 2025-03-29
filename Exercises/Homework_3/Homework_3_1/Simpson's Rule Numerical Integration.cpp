#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    double sum, sum_1, sum_2, a, b, n, h, f, x, x_a, x_b;
    
    // Prompt user for input
    cout << "Please enter the 'smallest' number of range you want. " << endl;
    cin >> a;
    cout << "Please enter the 'largest' number of range you want. " << endl;
    cin >> b;
    cout << "Please enter the number of 'parts' you want. " << endl;
    cin >> n;

    // Calculate the width of each part
    h = (b - a) / n;

    // Initialize sums
    sum = 0;
    sum_1 = 0;
    sum_2 = 0;

    // Calculate x_a and x_b
    x_a = sqrt(2 + a);
    x_b = sin(b);

    // Display initial values
    cout << "x_a= " << x_a << "\t" << "x_b= " << x_b << endl;

    // Main calculation loop
    for (int i = 0; i < n; i++)
    {
        // Calculate x for each iteration
        x = a + (i * h);

        // Check if x is greater than or equal to 0
        if (x >= 0)
        {
            // Calculate f(x) = sin(x)
            f = sin(x);
            sum_1 += f * h;
        }
        else if (x < 0)
        {
            // Calculate f(x) = sqrt(2 + x)
            f = sqrt(2 + x);
            sum_2 += f * h;
        }
    }

    // Calculate final sum
    sum = sum_1 + sum_2 + ((x_a + x_b) * h / 2);

    // Display results
    cout << "sum_1= " << sum_1 << endl;
    cout << "sum_2= " << sum_2 << endl;
    cout << "sum= " << sum << endl;

    return 0;
}
