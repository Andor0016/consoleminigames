#include <iostream>
#include <time.h>
#include "../common/common.h"
#include "../screen/screen.h"
#include "mastermind.h"

using namespace std;

char color(int num){
    switch(num) {
        case 1: return 'R';
        case 2: return 'W';
        case 3: return 'P';
        case 4: return 'O';
        case 5: return 'Y';
        case 6: return 'G';
    }
    return ' ';
}

string checkAnswer(string original, string guess){
    string points = "";
    for(int i=0; i<4; i++){
        if(charToLower(original[i]) == charToLower(guess[i])){
            points += '#';
        }
        else{
            points += 'X';
        }
    }
    return points;
}

int getPoints(string output){
    int points = 0;
    for(int i=0; i<4; i++){
        if(output[i] == '#')
        {
            points++;
        }
    }
    return points;
}

void startMastermind(){
    srand((unsigned)time(NULL));
    mastermindDescription();
    string randomColors = color(getRandomNumber(6));
    string input;
    int points;
    for(int i=0; i<4; i++){
        cout << "Your guess:";
        cin >> input;
        if(input.length() != 4){
            i--;
            cout << "Incorrect input!" << endl;
        }
        else{
            cout << checkAnswer(randomColors, input) << endl;
        }
        points = getPoints(checkAnswer(randomColors, input));
        if( points == 4){
            break;
        }
    }
    mastermindResults(points);
}