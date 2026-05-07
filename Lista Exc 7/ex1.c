// Faça um programa que leia um número real e imprima a quinta parte desse número. 

#include <stdio.h>

int main() {
    double n1, quinta_parte;
    scanf("%lf", &n1);
    
    quinta_parte = n1 / 5;

    printf("A quinta parte e: %.2lf", quinta_parte);

    return 0;
}