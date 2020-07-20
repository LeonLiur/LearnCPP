#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name -> ";

    // using cin
    // cin >> name;

    // using getline()
    getline(cin, name);

    cout << endl << endl << "Your name is " << name << endl;

    return 0;
}