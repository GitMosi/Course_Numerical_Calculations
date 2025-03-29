#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare ofstream object
    ofstream myfile;
    
    // Open file named "Homework_4_2_2.txt" for writing
    myfile.open("Homework_4_2_2.txt");

    // Declare variables
    double x, y, y0, n, h, a, b, f, g, j, y_new;

    // Prompt user for input
    cout << "please enter a number as 'a'." << endl;
    cin >> a;
    cout << "please enter a number as 'b'." << endl;
    cin >> b;
    cout << "please enter a number as 'y0'." << endl;
    cin >> y0;
    cout << "please enter a number as 'h'." << endl;
    cin >> n;

    // Calculate width of each part
    h = (b - a) / n;

    // Main calculation loop
    for (double i = 1; i <= n; i++)
    {
        // Calculate x for each iteration
        x = a + (i * h);
        
        // Calculate f(x) = (2*y0/x) + x^2*exp(x)
        f = ((2 * y0) / x) + pow(x, 2) * exp(x);
        
        // Update y using Euler's method with half-step
        y = y0 + (0.5 * h * f);
        
        // Calculate g(x) = (2*y/x) + x^2*exp(x)
        g = ((2 * y) / x) + pow(x, 2) * exp(x);
        
        // Calculate j(x) = x^2*(exp(x)-exp(1))
        j = pow(x, 2) * (exp(x) - exp(1));
        
        // Update y_new using improved Euler's method
        y_new = y0 + (h * g);
        
        // Output results to console and file
        cout << "x= " << x << "\t" << "y_new= " << y_new << "\t" << "j= " << j << endl;
        myfile << x << "\t" << y << "\t" << j << endl;
        
        // Update y0 for next iteration
        y0 = y_new;
    }

    // Close the file
    myfile.close();

    return 0;
}
