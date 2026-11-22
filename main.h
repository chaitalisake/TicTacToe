#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

void loading();
void positionGuide();
void showHeader(char p1[], char p2[]);
void displayBoard(char board[]);
int checkWinner(char board[]);
void printCell(char ch);

#endif
