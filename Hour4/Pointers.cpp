#include <iostream>

using namespace std;

int main()
{
    int num = 123;
    int *pNum = &num;

    string text = "bruh";
    string *pText = &text;

    double price = 3.99;
    double *pPrice = &price;

    bool isFun = false;
    bool *pIsFun = &isFun;

    cout << &num << endl << &text << endl << &price << endl << &isFun << endl;

    cout << pNum << endl;
    cout << *pNum << endl;
    return 0;
}