#include <iostream>

using namespace std;

int main ()
{
    // Declare variables
    short int a, b;
    
    // Prompt user for input
    cout << "\t" << "Please enter a number!" << endl;
    cin >> a;

    // Use switch statement to determine the prize based on the entered number
    switch(a)
    {
    case 1:
        cout << "\t" << "You won a knife." << endl;
        break;
    case 2:
        cout << "\t" << "You won a gun." << endl;
        break;
    default:
        cout << "\t" << "You won a ...!" << endl;
        break;
    }

    return 0;
}
