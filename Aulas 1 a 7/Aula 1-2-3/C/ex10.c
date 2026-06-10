#include <stdio.h>

int main() {
    int A = 5, B = 4, C = 3, D = 6;

    printf("%d\n", (A > C) && (C <= D));
    printf("%d\n", (A + B) > 10 || (A + B) == (C + D));
    printf("%d\n", (A >= C) && (D >= C));


    return 0;
}