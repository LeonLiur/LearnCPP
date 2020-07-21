#include <iostream>

using namespace std;

string numToDay(int num){
    switch (num)
    {
    case 1:
        return "Monday";
        break;              // Break not necessary but put in for visual
    case 2:
        return "Tuesday";
        break;
    case 3:
        return "Wednesday";
        break;
    case 4:
        return "Thursday";
        break;
    case 5:
        return "Friday";
        break;
    case 6:
        return "Satruday";
        break;
    case 7:
        return "Sunday";
        break;
    default:
        return "Not a valid number to convert to date";
        break;
    }
}



int main()
{
    int num;
    cout << "Enter a number to convert it to a day in the week -> ";
    cin >> num;
    cout << numToDay(num);
    return 0;
}