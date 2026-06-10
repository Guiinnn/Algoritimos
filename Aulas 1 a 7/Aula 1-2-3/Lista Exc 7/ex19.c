//Utilizando o for, construa um programa que execute o laço até o usuário digitar 123.

#include <stdio.h>

int main() {
    int num;

    for (;;) {  // loop infinito
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num == 123) {
            break;
        }
    }

    printf("Voce digitou 123!\n");

    return 0;
}