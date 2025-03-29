#include <iostream>
//#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Define variables for minimum and maximum values
    int max = 122;
    int min = 97;

    // Seed the random number generator using current time
    srand(time(0));

    // Generate a random number between min and max (exclusive)
    cout << (rand() % (max - min)) + min << endl;

    return 0;
}
