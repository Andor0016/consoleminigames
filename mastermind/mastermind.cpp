#include <iostream>
#include <time.h>
#include "mastermind.h"

using namespace std;

void gameDescription(){
    cout << "##########################################################################" << endl;
    cout << "#                               MASTERMIND                               #" << endl;
    cout << "#   The game generate 4 random color. You need to guess these colors.    #" << endl;
    cout << "#   When you guess the colors, you need to write letters, in order.      #" << endl;
    cout << "#                  R-Red                                                 #" << endl;
    cout << "#                  W-White                                               #" << endl;
    cout << "#                  B-Blue                                                #" << endl;
    cout << "#                  P-Pink                                                #" << endl;
    cout << "#                  O-Orange                                              #" << endl;
    cout << "#                  Y-Yellow                                              #" << endl;
    cout << "#                  G-Green                                               #" << endl;
    cout << "#  Your input if your guess is Green, Pink, Red, Red: \"GPRR\"             #" << endl;
    cout << "#                               Good luck!                               #" << endl;
    cout << "##########################################################################" << endl;

}

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

string createRandomColors(){
    string rc = "";
    int random;
    for(int i=0; i<4; i++)
    {
        random = 1 + rand() % 6;
        rc += color(random);
    }
    return rc;
}

char normalize(char input){
    if( input >= 65 && input <= 90){
        return input + 32;
    }
    else{
        return input;
    }
}

string checkAnswer(string original, string guess){
    string points = "";
    for(int i=0; i<4; i++){
        if(normalize(original[i]) == normalize(guess[i])){
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
    gameDescription();
    string randomColors = createRandomColors();
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
    if(points == 4){
        cout << "YOU WON!" << endl;
    }
    cout << "You found 4/" << points << "." << endl << endl << endl << endl;
}