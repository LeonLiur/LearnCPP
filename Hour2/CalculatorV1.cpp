#include <iostream>

using namespace std;

int addition(int num1,int num2){
    return num1 + num2;
}

int substraction(int num1,int num2){
    return num1 - num2;
}

int multiplication(int num1,int num2){
    return num1 * num2;
}

int division(int num1,int num2){
    return num1 / num2;
}

int main()
{
    int num1;
    int num2;
    char sign;
    bool inUse = true;
    char playAgain;

    while (inUse){
        cout << "Enter two integers sequentially -> ";
        cin >> num1 >> num2;

        cout << "Enter the operation sign that you want(+ , - , * or /) -> ";
        cin >> sign;

        if(sign == '+'){
            cout << "The result of " << num1 << " + " << num2 << " is " << addition(num1, num2);
        }else if(sign == '-'){
            cout << "The result of " << num1 << " - " << num2 << " is " << substraction(num1, num2);
        }else if(sign == '*'){
            cout << "The result of " << num1 << " * " << num2 << " is " << multiplication(num1, num2);
        }else if(sign == '/'){
            cout << "The result of " << num1 << " / " << num2 << " is " << division(num1, num2);
        }else{
            cout << "That is not a valid option.";
            return 0;
        }

        cout << endl << "Would you like to use the calculator again?(enter 'y' or 'n') -> ";
        cin >> playAgain;
        if(playAgain == 'n'){
            inUse = false;
        }else{
            cout << endl << "Got it, restarting the calculator";
        }
    }

    return 0;
}