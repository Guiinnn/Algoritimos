//18.Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E,
//conforme a fórmula a seguir:𝐸 = 1/1! + 1/2! + 1/3! 1/N!

#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    double E = 0;

    for (int i = 1; i <= N; i++) {

        // calcular o fatorial de i
        int fat = 1;
        for (int j = 1; j <= i; j++) {
            fat = fat * j;
        }

        // somar na expressão
        E = E + (1.0 / fat);
    }

    printf("Valor de E: %.6lf\n", E);

    return 0;
}
