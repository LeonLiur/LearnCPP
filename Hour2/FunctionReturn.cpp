#include <iostream>

using namespace std;

int cube(int in);

int main()
{
    int toCube = 9;
    cout << "The cube of " << toCube << " is " << cube(toCube);
    return 0;
}

int cube(int in)
{
    return in*in*in;
}
