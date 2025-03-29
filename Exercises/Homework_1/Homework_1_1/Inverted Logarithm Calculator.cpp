#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    // Declare variables to store the input parameter and result
    double param, result;

    // Prompt user for input and read it
    cout << "Please enter a double number to see its natural logarithm as 'result'." << endl;
    cin >> param;

    // Subtract 1 from the input to invert the number
    param = 1 - (param);

    // Calculate the natural logarithm of the inverted number
    result = log(param);

    // Start an infinite loop to repeatedly ask for input until the program is stopped
    while (param > 0)
    {
        // Display the current input and calculated result
        cout << "Your entered number: " << param << ".        " 
             << "\t" << "Your result: " << result << ".        " << endl;

        // Ask for a new input
        cin >> param;

        // Invert the new input
        param = 1 - (param);

        // Recalculate the logarithm
        result = log(param);
    }

    return 0;
}
