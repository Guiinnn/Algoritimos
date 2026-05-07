//Escreva uma função que receba por parâmetros dois números e retorne o maior deles

#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int x, y
    
    printf("Digite dois numeros.\n");
    scanf("%d %d", &x, &y);

    int resultado = maior(x, y);

    printf("O maior numero e: %d\n", resultado);

    return 0;
}