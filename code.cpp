#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a1; // переменная a
    int b1;
    int c1;
    int d1;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a1, &b1, &c1, &d1);

    if (a1 > 0) {
        printf("The first entered number (%d) is positive.\n", a1);
    }
    else if (a1 == 0) {
        printf("The first entered number (%d) is zero.\n", a1);
    }
    else {
        printf("The first entered number (%d) is negative.\n", a1);
    }

    if (a1 % 2 != 0 && a1 < 0) {
        int min = a1;
        // Проверяем, является ли b1 нечетным, отрицательным и меньше текущего минимума
        if (b1 % 2 != 0 && b1 < 0 && min > b1) {
            min = b1;
        }
        if (c1 % 2 != 0 && c1 < 0 && min > c1) {
            min = c1;
        }
        if (d1 % 2 != 0 && d1 < 0 && min > d1) {
            min = d1;
        }
        printf("The minimum odd negative number: %d\n", min);
    }
    else if (b1 % 2 != 0 && b1 < 0) {
        int min = b1;
        // Проверяем, является ли c1 нечетным, отрицательным и меньше текущего минимума
        if (c1 % 2 != 0 && c1 < 0 && min > c1) {
            min = c1;
        }
        if (d1 % 2 != 0 && d1 < 0 && min > d1) {
            min = d1;
        }
        printf("The minimum odd negative number: %d\n", min);
    }
    else if (c1 % 2 != 0 && c1 < 0) {
        int min = c1;
        // Проверяем, является ли d1 нечетным, отрицательным и меньше текущего минимума
        if (d1 % 2 != 0 && d1 < 0 && min > d1) {
            min = d1;
        }
        printf("The minimum odd negative number: %d\n", min);
    }
    else if (d1 % 2 != 0 && d1 < 0) {
        printf("The minimum odd negative number: %d\n", d1);
    }
    else
    {
        printf("The minimum odd negative number was not found\n");
    }

    return 0;


}
