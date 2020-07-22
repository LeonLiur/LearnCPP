#include <iostream>

using namespace std;

int main()
{
    int numGrid[4][4] = {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };
    int x;
    int y;
    cout << "Enter x and y to query in the grid sequentially -> ";
    cin >> x >> y;
    cout << "The number in the grid you are looking for is " << numGrid[x][y];
    return 0;
}