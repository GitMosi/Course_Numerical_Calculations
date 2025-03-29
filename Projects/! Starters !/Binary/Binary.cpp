#include <iostream>

using namespace std;

int main ()
{
    // Declare variables using short int type
    short int a,b;
    
    // Initialize variable a with maximum value for short int
    a = 65535;
    
    // Add 2 to a, which will cause overflow
    b = a + 2;
    
    // Print the result
    cout << b << endl;

    return 0;
}
