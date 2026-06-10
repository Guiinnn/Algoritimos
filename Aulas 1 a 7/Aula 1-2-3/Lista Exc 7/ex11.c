//Faça um programa que leia um número inteiro positivo N e depois imprima os N
//primeiros números naturais ímpares

#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%d\n", 2*i + 1); 

    return 0;
}