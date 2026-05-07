//Sejam a e b os catetos de um triângulo cuja a hipotenusa h é obtida pela equação:  ℎ = 𝑎²+𝑏²
//Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, h;
    scanf("%f %f", &a, &b);

    h = sqrt((a*a) + (b*b));

    printf("O valor da hipotenusa e: %.2f", h);

    return 0;
}