/** lab07-01.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 07
* Purpose: Create a program that returns the location of a particular user-determined squadron
* ===========================================================*/

#include <stdio.h>
#inlcude "lab07-01functs.h"

int main(void) {

    int squadNum;

    printf("Enter a squadron number: \n");
    scanf("%i", squadNum);

    displayResidenceHall(squadNum);
}