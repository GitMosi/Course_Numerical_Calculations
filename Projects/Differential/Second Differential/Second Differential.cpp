#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double h, x1, f, f1, df, f2, x2;
    int x;

    // Read initial value from user input
    cin >> x;

    // Simulate for different step sizes
    for (double h = 0.05; h <= 0.5; h = h + 0.05)
    {
        // Calculate x1 and x2 using current h
        x1 = x + h;
        x2 = x - h;

        // Calculate f(x+h) and f(x-h)
        f2 = x2 * exp(x2);
        f1 = x1 * exp(x1);

        // Calculate original function value
        f = x * exp(x);

        // Central difference formula for first derivative
        df = (1 / pow(h, 2)) * (f1 + f2 - 2 * f);

        // Print results
        cout << h << "\t" << df << endl;
        myfile << df << endl;
    }

    myfile.close();
    return 0;
}






// 2xy+6x+(x2-4)y'=0
