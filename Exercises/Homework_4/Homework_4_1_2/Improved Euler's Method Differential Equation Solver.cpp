#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare ofstream object
    ofstream myfile;
    
    // Open file named "Homework_4_1_2.txt" for writing
    myfile.open("Homework_4_1_2.txt");

    // Declare variables
    double x, y, y0, n, h, a, b, f1, f2, phi, u;

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
        
        // Calculate f1(x) = (1+x)/(1+y0)
        f1 = (1 + x) / (1 + y0);
        
        // Update y using Euler's method
        y = y0 + (h * f1);
        
        // Calculate f2(x) = (1+x)/(1+y)
        f2 = (1 + x) / (1 + y);
        
        // Calculate phi as average of f1 and f2
        phi = 0.5 * (f1 + f2);
        
        // Update u using improved Euler's method
        u = y0 + (h * phi);
        
        // Output results to console and file
        cout << "x= " << x << "\t" << "u= " << u << endl;
        myfile << "x= " << x << "\t" << "u= " << u << endl;
        
        // Update y0 for next iteration
        y0 = u;
    }

    // Close the file
    myfile.close();

    return 0;
}
