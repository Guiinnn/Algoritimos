//Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
//Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo
//de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois
//anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero maior ou igual a 0: ");
    scanf("%d", &num);

    int a = 0, b = 1, proximo;

    for(int i = 0; i < num; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("Termo %d: %d\n", num, a);

    return 0;
}