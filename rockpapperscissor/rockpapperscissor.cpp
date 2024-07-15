#include <iostream>
#include "rockpapperscissor.h"
#include "../common/common.h"
#include "../screen/screen.h"


char getGamesChoice(){
    int gamesNumber = getRandomNumber(3);
    switch (gamesNumber) {
        case 1: return 'r'; break;
        case 2: return 'p'; break;
        case 3: return 's'; break;
        default: return ' '; break;
    }
}

char getPlayersChoice(){

}

std::string getFullChoice(char choice){
    char normalizedChoice = charToLower(choice);
    switch (normalizedChoice){
        case 'r':
            return "Rock";
            break;
        case 'p':
            return "Paper";
            break;
        case 's':
            return "Scissor";
            break;
        default:
            return "N/A";
            break;
    }
}

void startRockPaperScissor(){
    rockPaperScissorDescription();
    char game = getGamesChoice();
    char payer = getPlayersChoice();
}