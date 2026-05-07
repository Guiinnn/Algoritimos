//Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: os
//divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include <stdio.h>

int main() {
    int num;

    // Entrada
    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    // Verificação básica
    if (num <= 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 1; //Loop para digitar numero certo
    }

    printf("Divisores de %d: ", num);

    // Loop para encontrar divisores
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}