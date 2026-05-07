#include <stdio.h>

int main() {
    int idades[4] = {18, 25, 32, 19};

    printf("Primeira idade: %d\n", idades[0]);
    printf("Segunda idade %d\n", idades[1]);
    printf("Terceira idade %d\n", idades[3]);

    idades[2] = 40;

    return 0;
}