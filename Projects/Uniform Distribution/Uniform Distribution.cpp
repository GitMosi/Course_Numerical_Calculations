#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // Open a file stream to write output
    ofstream myfile;
    myfile.open("Random.txt");

    // Declare variables
    double x;
    
    // Seed random number generator with current time
    srand(time(0));

    // Generate 101 random numbers (including 0)
    for (int i = 0; i <= 100; i++)
    {
        // Generate a random integer between 0 and RAND_MAX
        x = rand();
        
        // Normalize to [0, 1] range
        x = ((double)rand() / RAND_MAX);
        
        cout << x << endl;
        myfile << x << endl;
    }

    // Print maximum possible random value
    cout << RAND_MAX << endl;

    // Close file stream
    myfile.close();

    return 0;
}
