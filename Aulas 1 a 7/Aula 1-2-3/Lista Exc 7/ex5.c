//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    if(n1 == n2) {
        printf("Numeros iguais");
    }
    else if (n1 > n2) {
        printf("O maior numero e: %d", n1);
    }
    else if (n1 < n2) {
        printf("O maior numero e: %d", n2);
    }

    return 0;
}