#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdbool.h>


void playTurn(char board[BOARD_SIZE][BOARD_SIZE], char player);
bool canPlay(char board[BOARD_SIZE][BOARD_SIZE], char player);
void flipDirection(char board[BOARD_SIZE][BOARD_SIZE], int x, int y, int dx, int dy, char player);
void makeMove(char board[BOARD_SIZE][BOARD_SIZE], int x, int y, char player);
bool isGameOver(char board[BOARD_SIZE][BOARD_SIZE]);
int calculateScore(char board[BOARD_SIZE][BOARD_SIZE], char player);
void printWinner(char board[BOARD_SIZE][BOARD_SIZE]);

#endif

