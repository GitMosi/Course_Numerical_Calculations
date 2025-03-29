#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{

//ofstream myfile;
//myfile.open("Random.txt")

    // Declare variables
    int N, N0, deltaN;
    double x, lambda;
    srand(time(0));  // Seed random number generator
    N = N0;
    cin >> lambda;
    cin >> N0;

    // Simulate for 100 iterations
    for(int t = 1; t <= 100; t++)
    {
        deltaN = 0;
        
        // For each particle in the system
        for(int i = 1; i <= N; i++)
        {
            // Generate a random number between 0 and 1
            x = ((double)rand() / RAND_MAX);
            
            // Check if the particle moves (probability determined by lambda)
            if(x <= lambda)
            {
                deltaN += 1;
                N -= 1;
                
                // Print progress every iteration
                cout << t << "\t" << N << endl;
            }
        }
    }

    return 0;
}
