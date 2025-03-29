#include<iostream>
#include<fstream>
#include<cmath>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    ofstream myfile; // Declare an ofstream object to write to a file
    myfile.open("Random.txt"); // Open a file named "Random.txt" for writing

    double x, y; // Declare variables to store random numbers and trigonometric values
    srand(time(0)); // Seed the random number generator with current time

    for(int i = 0; i <= 10000; i++) // Loop 10001 times
    {
        x = rand(); // Generate a random integer
        x = ((double)rand() / RAND_MAX); // Normalize the random number to [0, 1]
        y = tan(3.1415 * x / 2); // Calculate tangent of half the angle
        cout << x << "\t" << y << endl; // Print to console
        myfile << x << "\t" << y << endl; // Write to file
    }

    myfile.close(); // Close the file after writing

    return 0;
}
