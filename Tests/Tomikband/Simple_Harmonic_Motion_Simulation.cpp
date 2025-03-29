#include <iostream>
#include<cmath>
#include<math.h>
#include<fstream>

using namespace std;

int main()
{
    // Open output file
    ofstream myfile;
    myfile.open("tomikband.txt");

    // Declare variables for simulation parameters
    double a,b, n, h ,y0 ,f1, y, f2 ,u, phi, x ;

    // Set initial conditions
    a=0; // Initial position
    b=2; // Final position
    n=100; // Number of steps
    h=(b-a)/n; // Time step size
    y0=1; // Initial displacement

    // Main simulation loop
    for (int i=1 ;i<=n ;i++)
    {
        // Calculate current position
        x=a+(i*h);
        
        // Update displacement and velocity
        f1=y0; // First derivative of displacement
        y=y0+(h*f1); // Update displacement
        f2=y; // Second derivative of displacement
        phi=(0.5)*(f1+f2); // Average acceleration
        
        // Update displacement and velocity using average acceleration
        u=y0+(h*phi);
        y0=y;

        // Print results
        cout<<x<<"\t"<<u<<endl;
        myfile<<x<<"\t"<<u<<endl;
    }

    // Close output file
    myfile.close();

    return 0;
}
