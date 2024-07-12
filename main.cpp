#include "common/common.h"
#include "screen/screen.h"
#include "mastermind/mastermind.h"


int main(){
    welcomeScreen();
    bool loop = true;

    while(loop){
        char choice = menuScreen();
        switch(charToLower(choice)){
            case 'x':

                break;
            case 'm':
                startMastermind();
                break;
            case 'r':
                break;
            case 'a':
                aboutScreen();
                break;
            case 'e':
                exitScreen();
                loop = false;
                break;
            default:
                break;
        }
    }

    return 0;
}
