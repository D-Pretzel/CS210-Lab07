/** lab07-01functs.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 07
* Purpose: Create a program that returns the location of a particular user-determined squadron
* ===========================================================*/

#include <stdio.h>

int displayResidenceHall(int squad){

    int legit = (squad > 0 && squad < 41) ? 1 : 0;

    if (squad > 0 && squad < 24) {
        printf("Squadron %i is in Vandy.\n", squad);
    } else if (squad > 23 && squad < 41) {
        printf("Squadron %i is in Sijan.\n", squad);
    } else {
        printf("No such squadron exists (%i)\n", squad);
    }

    return legit;
}