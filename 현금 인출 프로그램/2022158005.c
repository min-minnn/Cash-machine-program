#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int fif = 0, twen = 0, ten = 0;
    int cost;

    printf("입력: ");
    scanf("%d달러", &cost);

    while (cost != 0) {
        if (cost >= 50) {
            cost = cost - 50;
            fif++;
        }
        else if (cost >= 30) {
            cost = cost - 30;
            twen++;
        }
        else if (cost >= 10) {
            cost = cost - 10;
            ten++;
        }
    }

    if (fif != 0) {
        printf("50달러: %d장", fif);
    }

    if (twen != 0) {
        if (fif != 0) {
            printf(", ");
        }
        printf("20달러: %d장", twen);
    }

    if (ten != 0) {
        if (fif != 0 || ten != 0) {
            printf(", ");
        }
        printf("10달러: %d장", ten);
    }
    printf("\n");

    return 0;
}