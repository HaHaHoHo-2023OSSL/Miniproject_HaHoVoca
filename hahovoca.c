#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char word[10];
    char meaning[10];
} Voca;

typedef struct{
    char ID[20];
    Voca *voca[50];
} User;