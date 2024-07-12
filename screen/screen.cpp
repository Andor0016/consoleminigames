#include <iostream>
#include "screen.h"


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
    cout << endl;

    return choice;
}

void aboutScreen(){
    cout << endl << endl << endl;
    cout << " $$$$$$\\  $$\\   $$\\ $$$$$$$\\   $$$$$$\\  $$$$$$$\\         $$$$$$\\   $$$$$$\\    $$\\   $$$$$$\\" << endl;
    cout << "$$  __$$\\ $$$\\  $$ |$$  __$$\\ $$  __$$\\ $$  __$$\\       $$$ __$$\\ $$$ __$$\\ $$$$ | $$  __$$\\" << endl;
    cout << "$$ /  $$ |$$$$\\ $$ |$$ |  $$ |$$ /  $$ |$$ |  $$ |      $$$$\\ $$ |$$$$\\ $$ |\\_$$ | $$ /  \\__|" << endl;
    cout << "$$$$$$$$ |$$ $$\\$$ |$$ |  $$ |$$ |  $$ |$$$$$$$  |      $$\\$$\\$$ |$$\\$$\\$$ |  $$ | $$$$$$$\\" << endl;
    cout << "$$  __$$ |$$ \\$$$$ |$$ |  $$ |$$ |  $$ |$$  __$$<       $$ \\$$$$ |$$ \\$$$$ |  $$ | $$  __$$\\" << endl;
    cout << "$$ |  $$ |$$ |\\$$$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |      $$ |\\$$$ |$$ |\\$$$ |  $$ | $$ /  $$ |" << endl;
    cout << "$$ |  $$ |$$ | \\$$ |$$$$$$$  | $$$$$$  |$$ |  $$ |      \\$$$$$$  /\\$$$$$$  /$$$$$$\\ $$$$$$  |" << endl;
    cout << "\\__|  \\__|\\__|  \\__|\\_______/  \\______/ \\__|  \\__|       \\______/  \\______/ \\______|\\______/" << endl << endl;
    cout << "Developed by: Andor Balo (Andor 0016)" << endl;
    cout << "2024" << endl << endl;
    system("pause");

}

void mastermindDescription(){
    cout << "##########################################################################" << endl;
    cout << "#                               MASTERMIND                               #" << endl;
    cout << "#   The game generates 4 random color. You need to guess these colors.   #" << endl;
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

void mastermindResults(int points){
    if(points == 4){
        cout << "YOU WON!" << endl;
    }
    cout << "You found 4/" << points << "." << endl << endl << endl << endl;
}

void exitScreen(){
    cout << "##########################################################################" << endl;
    cout << "#                        Thanks for playing!                             #" << endl;
    cout << "#                             Good bye!                                  #" << endl;
    cout << "##########################################################################" << endl;
    system("pause");
}