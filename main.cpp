#include <iostream>
#include "about/aboutScreen.h"

using namespace std;

void welcomeScreen(){
    cout << "##########################################################################" << endl;
    cout << "#                  Welcome to Console Mini Games!                        #" << endl;
    cout << "##########################################################################" << endl;
}

char menuScreen(){
    char choice;
    cout << " Please choice from the menu:" << endl;
    cout << " X - XoX" << endl;
    cout << " M - Mastermind" << endl;
    cout << " R - Rock - Paper - Scissors" << endl;
    cout << " A - About" << endl;
    cout << " E - Exit" << endl;
    cout << " Your choice: ";
    cin >> choice;

    return choice;
}

char normalizeInput(char input){
    if( input >= 65 && input <= 90){
        return input + 32;
    }
    else{
        return input;
    }
}

int main(){
    welcomeScreen();
    char choice = menuScreen();

    switch(normalizeInput(choice)){
        case 'x':
            break;
        case 'm':
            break;
        case 'r':
            break;
        case 'a':
            printAboutScreen();
            break;
        case 'e':
            break;
        default:
            break;
    }

    return 0;
}
