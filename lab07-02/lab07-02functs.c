/** lab07-02functs.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 07 pt. 2
* Purpose: Take input of 2-D point value and display what quadrant it's in
* ===========================================================*/

#include <stdio.h>

int quadrantOfPoint(int x, int y) {
    if (x > 0 && y > 0) {
        printf("The point (%i, %i) is in quadrant 1.", x, y);
        return 1;
    } else if (x < 0 && y > 0) {
        printf("The point (%i, %i) is in quadrant 2.", x, y);
        return 2;
    } else if (x < 0 && y < 0) {
        printf("The point (%i, %i) is in quadrant 3.", x, y);
        return 3;
    } else if (x > 0 && y < 0) {
        printf("The point (%i, %i) is in quadrant 4.", x, y);
        return 4;
    } else if (x == 0 && y == 0) {
        printf("The point (%i, %i) is on the origin.", x, y);
        return 0;
    } else if (y == 0 && x != 0) {
        printf("The point (%i, %i) is on the X-axis.", x, y);
        return -1;
    } else if (x == 0 && y != 0) {
        printf("The point (%i, %i) is on the Y-axis.", x, y);
        return -2;
    }
}