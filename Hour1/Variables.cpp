#include <iostream>

using namespace std;

int main()
{
    string name = "Leo";
    int age = 19;
    double ageDoub = 18.5;
    bool isBoy = true;
    char initial = 'L';
    int charAt = 2;

    cout << name << " is his name" << endl;
    cout << age << " is his age"  << endl;
    cout << ageDoub << " is his decimal age" << endl;
    cout << "Is he a boy? " << isBoy << endl;
    cout << "His initial is " << initial << endl;
    cout << "The " << charAt << "th letter in his name is " << name[charAt - 1] << endl;
    cout << "The length of his name is " << name.length();

    name = "George";

    cout << endl << name << " is his new name" << endl;

    return 0;
}