#include <iostream>

using namespace std;

int power(int base, int power){
    int product = 1;
    for(int i = 0; i < power; i++){
        product *= base;
    }
    return product;
}

int main()
{
    cout << power(2, 3) << endl;
    cout << power(5, 5) << endl;
    cout << power(4, 5) << endl;
    return 0;
}