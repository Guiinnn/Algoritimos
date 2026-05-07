//Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
//linhas do chamado triângulo de Floyd

#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    int num = 1;
    //Controla as linhas
    for (int i = 1; i <= N; i++) {
        //Controla as colunas
        for (int j = 1; j <= i; j++) {
            //Soma o numero
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}