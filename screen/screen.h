//
// Created by andor on 12/7/2024.
//

#ifndef CONSOLEMINIGAMES_SCREEN_H
#define CONSOLEMINIGAMES_SCREEN_H

void welcomeScreen();
char menuScreen();
void aboutScreen();
void mastermindDescription();
void mastermindResults(int points);
void rockPaperScissorDescription();
void rockPaperScissorResults(int result, std::string game, std::string player);
void exitScreen();

#endif //CONSOLEMINIGAMES_SCREEN_H
