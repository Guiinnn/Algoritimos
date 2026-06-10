//Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos
//números de 1 a N.

#include <stdio.h>

int somatorio(int N) {

    if (N == 1) {
        return 1;
    }

    return N + somatorio(N - 1);
}

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int resultado = somatorio(num);

    printf("Somatorio de 1 ate %d = %d\n", num, resultado);

    return 0;
}