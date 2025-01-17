
#include "utils.h"


void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int findIndex(char* arr, int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


int findMax(int* arr, int size) {
    if (size <= 0 || arr == NULL) {
        return -1;
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int findMin(int* arr, int size) {
    if (size <= 0 || arr == NULL) {
        return -1;
    }

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


void afficher_progressivement_texte(const char* texte, int delai_ms) {
    while (*texte) {
        printf("%c", *texte);
        fflush(stdout); 
        usleep(delai_ms * 1000);
        texte++; 
    }
    putchar('\n');
}
