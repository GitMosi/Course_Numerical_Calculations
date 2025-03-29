#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // Declare variables
    int N, N0, deltaN;
    double x, landa;
    
    // Initialize random seed
    srand(time(0));
    
    // Set initial values
    N = N0;
    cin >> landa >> N0;

    // Simulate for 100 generations
    for(int t = 1; t <= 100; t++)
    {
        // Reset deltaN for each generation
        deltaN = 0;
        
        // Iterate through existing population
        for(int i = 1; i <= N; i++)
        {
            // Generate a random number between 0 and 1
            x = ((double)rand() / RAND_MAX);
            
            // Check if the random number is less than or equal to landa
            if(x <= landa)
            {
                // If true, increment deltaN and reduce population size
                deltaN++;
                N--;
                
                // Print current generation and population size
                cout << t << "\t" << N << endl;
            }
        }
    }

    return 0;
}
