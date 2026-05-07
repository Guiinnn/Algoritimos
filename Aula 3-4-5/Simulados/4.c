#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O numero %d e positivo\n", num);
    }
    else if (num < 0) {
        printf("O numero %d e negativo\n", num);
    }
    else {
        printf("O numero %d e zero\n", num);   // ou "igual a zero", se preferir
    }

    return 0;
}