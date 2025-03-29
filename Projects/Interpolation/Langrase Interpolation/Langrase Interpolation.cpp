// Include necessary libraries
#include <iostream>
#include <fstream>
#include <cmath>

// Use the standard namespace
using namespace std;

int main()
{
    // Declare and open a file stream object
    ofstream myfile;
    myfile.open("new.txt");

    // Declare variables
    double x1, x2, x, y1, y2, y, m1, y3, x3, m2, m3;

    // Assign values to variables
    x1 = 6;
    x2 = 7;
    x3 = 8;
    x = 6.5;

    y1 = 36;
    y2 = 49;
    y3 = 64;

    // Calculate coefficients for cubic interpolation
    m1 = ((x - x2) * (x - x3)) / ((x1 - x2) * (x1 - x3));
    m2 = ((x - x1) * (x - x3)) / ((x2 - x1) * (x2 - x3));
    m3 = ((x - x2) * (x - x1)) / ((x3 - x2) * (x3 - x1));

    // Calculate interpolated y-value
    y = (m1 * y1) + (m2 * y2) + (m3 * y3);

    // Output results to console and file
    cout << x << "\t" << y << endl;
    myfile << x << "\t" << y << endl;

    // Close the file stream
    myfile.close();

    // Return 0 to indicate successful execution
    return 0;
}
