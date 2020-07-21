#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;

    if (isMale){
        if (isTall){
            cout << "You are a tall male" << endl;
        }else{
            cout << "You are not a tall but a male"<< endl;
        }
    }else if (!isMale && isTall){
        cout << "You are not a male but you are tall" << endl;
    }else{
        cout << "You are something else" << endl;
    }

    return 0;
}