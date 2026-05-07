//Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
//média.

#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    int contador = 0;

    while (contador < 10) {
        scanf("%d", &n);

        if (n > 0) {
            soma += n;
            contador++;
        }
    }

    float media = soma / 10.0;

    printf("%.2f\n", media);

    return 0;
}