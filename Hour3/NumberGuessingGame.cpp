#include <iostream>

using namespace std;

bool game(int round){
    int correctNums[] = {17,71,72,48,92,16,73,37,51,75,41,43,96,66,82,56,46,10,87,63,78,6,32,57,80,49,21,23,100,7,77,59,30,15,3,53,2,9,93,68,22,90,50,27,91,85,81,74,38,62};


    int correctNum = correctNums[(round - 1) % 50];
    int guess;
    bool guessed = false;
    char playAgain;

    while (!guessed){
        cout << "Enter a number between 1 and 100 -> ";
        cin >> guess;

        if(guess == correctNum){
            guessed = true;
            cout << "Congrats! You have guessed the number!" << endl;
            cout << "Do you want to play again? Enter y/n -> ";
            cin >> playAgain;
            return playAgain == 'y';
        }else if(guess > correctNum){
            cout << "Your guess is too big, make it smaller, try again!" << endl;
        }else{
            cout << "Your guess is too small, make it bigger, try again!" << endl;
        }
    }
    return false;
}



int main()
{
    int timesPlayed = 1;
    while (game(timesPlayed)){
        timesPlayed++;
    }


    cout << "Thank you for playing the guessing game, you have played " << timesPlayed << " times today, bye.";
    return 0;
}