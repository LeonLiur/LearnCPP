#include <iostream>

using namespace std;

int main()
{
    int numArray[] = {2, 3, 123, 4134, 34, 90, 5, 43};

    cout << numArray[3] << endl;

    numArray[3] = 43;

    cout << numArray[3] << endl;

    // Setting up array with size
    int numArrayWSize[20];

    return 0;
}