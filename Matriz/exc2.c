//Fazer um algoritmo para ler uma matriz quadrada de tamanho 10 e uma função para inverter
//as linhas pelas colunas em uma segunda matriz de mesmo tamanho. Imprimir ao final a segunda
//matriz.

#include <stdio.h>
#include <string.h>

void comparador (char s1[], char s2[]) {

    if (strcmp(s1, s2) == 0) {
        puts("As strings sao iguais\n");
    } else {
        puts("As strings sao diferentes\n");
    }
}

int main () {
    char s1[100], s2[100];

    printf("Digite a primeira string: ");
    fgets(s1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(s2, 100, stdin);

    comparador(s1, s2);

    return 0;
}