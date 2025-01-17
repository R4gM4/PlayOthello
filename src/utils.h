#ifndef UTILS_H
#define UTILS_H

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define BGRED "\033[41m"
#define GREEN "\033[32m"
#define BGGREEN "\033[42m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define GRAY "\033[37m"


void clearInputBuffer();
int findIndex(char* arr, int size, char target);
int findMax(int* arr, int size);
int findMin(int* arr, int size);
void afficher_progressivement_texte(const char* texte, int delai_ms);

#endif
