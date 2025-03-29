#include<iostream>
#include<cmath>
#include<math.h>
#include<fstream>

// Declare variables for position, velocity, time step, etc.
double a, b, h, n, v0, x0, x, v, f1, f2, f2_new, f1_new, phi1, phi2, E, k, u, t, x_new, v_new;

// Open output file
ofstream myfile;
myfile.open("mosiband.txt");

// Set initial conditions
a = 0; // Initial position
b = 2; // Final position
n = 1000; // Number of steps
h = (b - a) / n; // Time step size

v0 = 1; // Initial velocity
x0 = 0; // Initial position

// Main simulation loop
for (double i = 1; i <= n; i++) {
    // Calculate current time
    t = a + (i * h);
    
    // Update velocities and positions using Euler method
    f1 = -x0; // First derivative of position
    v = v0 + (h * f1); // Update velocity
    f2 = v0; // Second derivative of position
    x = x0 + (h * f2); // Update position
    
    // Apply second-order Runge-Kutta method
    f1_new = -x; // First derivative at new position
    f2_new = v; // Second derivative at new velocity
    
    phi1 = (0.5) * (f1 + f1_new); // First term of Runge-Kutta formula
    phi2 = (0.5) * (f2 + f2_new); // Second term of Runge-Kutta formula
    
    x_new = x0 + (h * phi2); // Update position using Runge-Kutta method
    v_new = v0 + (h * phi1); // Update velocity using Runge-Kutta method
    
    // Calculate kinetic energy and potential energy
    k = 0.5 * pow(v_new, 2);
    u = 0.5 * pow(x_new, 2);
    
    E = k + u; // Total energy

    // Print results
    cout << t << "\t" << k << "\t" << u << "\t" << E << endl;
    myfile << t << "\t" << k << "\t" << u << "\t" << E << endl;

    // Update variables for next iteration
    v0 = v;
    x0 = x;
}

// Close output file
myfile.close();

return 0;
