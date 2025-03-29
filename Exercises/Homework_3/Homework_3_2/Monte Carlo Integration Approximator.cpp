#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    // Declare variables
    double np_1, np_2, ns, A_1, A_2, A, a_1, a_2, b_1, b_2, n_1, n_2, n, h, f_1, f_2, x, x_a, x_b, y, rx, Ap, A_1_1;
    
    // Initialize variables
    a_1 = -1;
    b_1 = 0;
    
    // Prompt user for input
    cout << "Please enter the number of 'parts' you want. " << endl;
    cin >> n_1;
    
    // Calculate width of each part and area under sqrt(x+2) from -1 to 0
    h = (b_1 - a_1) / n_1;
    A_1 = (b_1 - a_1) * sqrt(0 + 2);
    np_1 = 0;
    x_a = sqrt(2 + a_1);

    // First integration loop
    for(int i = 1; i <= n_1; i++)
    {
        // Generate random x and y values
        x = ((double)rand() / RAND_MAX);
        y = ((double)rand() / RAND_MAX);
        
        // Check if y < sqrt(x+2), increment np_1
        if (y < f_1) np_1++;
        else ns++; // Otherwise, increment ns
    }
    
    // Calculate approximate area
    A_1_1 = (np_1 / n_1) * A_1;
    cout << "A_1_1= " << A_1_1 << endl;

    // Reset variables for second integration
    a_2 = 0;
    b_2 = 2;
    cout << "Please enter the number of 'parts' you want. " << endl;
    cin >> n_2;
    
    // Calculate width of each part and area under sin(x) from 0 to 2
    h = (b_2 - a_2) / n_2;
    A_2 = (b_2 - a_2) * sin(2);
    np_2 = 0;
    x_b = sin(b_2);

    // Second integration loop
    for(int j = 1; j <= n_2; j++)
    {
        // Generate random x and y values
        x = ((double)rand() / RAND_MAX);
        y = ((double)rand() / RAND_MAX);
        
        // Check if y < sin(x), increment np_2
        if (y < f_2) np_2++;
        else ns++; // Otherwise, increment ns
    }
    
    // Calculate approximate area
    A_2_1 = (np_2 / n_2) * A_2;
    cout << "A_2_1= " << A_2_1 << endl;

    // Calculate total approximate area
    Ap = A_2_1 + A_1_1;
    cout << "Ap= " << Ap << endl;

    return 0;
}
