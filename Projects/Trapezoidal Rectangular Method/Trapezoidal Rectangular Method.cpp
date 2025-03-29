#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    double sum, sum_2, a, b, n, h, f, x, x_a, x_b;
    
    // Read input from user
    cin >> a >> b >> n;
    
    // Calculate width of subinterval
    h = (b - a) / n;
    
    sum = 0;
    
    // Calculate x_a and x_b (left and right endpoints)
    x_a = pow(a, 3);
    x_b = pow(b, 3);

    // Perform Simpson's rule approximation
    for(int i = 0; i < n; i++)
    {
        x = a + (i * h);
        f = pow(x, 3);
        sum += f * h;
    }

    // Apply composite Simpson's rule formula
    sum_2 = sum + ((x_a + x_b) * h / 2);

    cout << sum_2 << endl;

    return 0;
}
