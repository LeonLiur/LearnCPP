#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 4;
    double doub = 3.5;

    cout << ++ num << endl;
    cout << num << endl;
    cout << num ++ << endl;
    cout << num << endl;
    doub += 4.5;
    cout << doub << endl;
    
    // Math functions
    cout << pow(3.0, 4.0) << endl;
    cout << round(3.6) << endl;
    cout << round(3.3) << endl;
    cout << ceil(3.2) << endl;
    cout << floor(3.9) << endl;
    cout << sqrt(4) << endl;
    cout << sqrt(2) << endl;
     
    //  Returns the bigger one
    cout << fmax(3, 7) << endl;

    // Vice Versa
    cout << fmin(4, 12) << endl;

    return 0;
}