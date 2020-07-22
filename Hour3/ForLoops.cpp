#include <iostream>

using namespace std;

int main()
{
    int nums[] = {1,23,53,412,53};
    
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    
    // Java foreach loop
    for(int x: nums){
        cout << x << endl;
    }
    


    return 0;
}