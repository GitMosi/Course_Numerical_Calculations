#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Declare variables
    ofstream myfile;
    myfile.open("new.txt");
    
    double h, x1, f, fh, df;
    int x;

    // Read initial value from user input
    cin >> x;

    // Simulate for different step sizes
    for (double h = 0.05; h <= 0.5; h = h + 0.05)
    {
        // Calculate next x using current h
        x1 = x + h;

        // Define function f(x) = x * exp(x)
        f = x * exp(x);
        
        // Calculate f(x+h) = (x+h) * exp((x+h))
        fh = x1 * exp(x1);

        // Approximate derivative using forward difference
        df = (1 / h) * (fh - f);

        // Print results
        cout << h << "\t" << df << endl;
        myfile << df << endl;
    }

    myfile.close();
    return 0;
}
