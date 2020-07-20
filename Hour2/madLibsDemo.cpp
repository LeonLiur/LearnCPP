#include <iostream>

using namespace std;

int main()
{
    string color1, color2, celeb;

    cout << "Please enter one by one a color, another color and a celebrity that you hate -> ";

    cin >> color1 >> color2 >> celeb;

    cout << "Roses are " << color1 << endl;
    cout << "Violets are " << color2 << endl;
    cout << "I don't like " << celeb << endl;

    return 0;
}