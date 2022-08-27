/** lab07-02.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 07 pt. 2
* Purpose: Take input of 2-D point value and display what quadrant it's in
* ===========================================================*/

#include <stdio.h>
#include "lab07-02functs.h"

int main(void) {
    int x, y;

    printf("Enter the x and y values of a point: \n");
    scanf("%i %i", &x, &y);

    quadrantOfPoint(x, y);
}