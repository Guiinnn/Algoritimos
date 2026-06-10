//Desenvolver um algoritmo para ler uma matriz de números reais, um escalar e uma função para
//calcular a multiplicação da matriz pelo escalar. Imprimir o resultado em uma segunda função.

#include <stdio.h>

void comparador (char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        puts("As strings são iguais.");
    } else {
        puts("As strings são diferentes.");
    }
}

int main () {
    char s1[100], s2[100];

    puts("Digite a primeira string: ");
    fgets(s1, 100, stdin);

    puts("Digite a segunda string: ");
    fgets(s2, 100, stdin);
    
    comparador(s1, s2);

    return 0;
}