// Include necessary libraries
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

// Use standard namespace for convenience
using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;  // File output stream variable
    double x;         // Variable for storing generated random number
    int i;            // Loop counter

    // Seed the random number generator
    srand((time(0)));

    // Open the output file
    myfile.open("Random.txt");

    // Generate and write 101 random numbers to the file
    for(i = 0; i <= 100; i++)
    {
        // Generate a random number between 0 and RAND_MAX
        x = ((double)rand() / RAND_MAX);
        
        // Write x to the file
        myfile << x << endl;
    }

    // Print RAND_MAX
    cout << RAND_MAX << endl;

    // Close the output file
    myfile.close();

    return 0;
}
