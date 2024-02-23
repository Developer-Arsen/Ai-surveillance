#include <iostream>

int main () {
    int x = 10;
    int * ptrx = &x;
    int& ref_x = x;
    int y = 50;
    ref_x = y; // 50

    printf("x value is: %d \n", x);

    *ptrx = 40;

    printf("x value is: %d \n", x);

    ref_x = 60;
    printf("x value is: %d \n", x);
    return 0;
}