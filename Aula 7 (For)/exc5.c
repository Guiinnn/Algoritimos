#include <stdio.h>

int somaintervalo(int n1, int n2) {
    int soma = 0;

    for (int i = n1; i <= n2; i++) {
        soma += i;
    }

    for (int i = n1 - 1; i >= n1; i--) {
        soma += i;
    }

    return soma;
}

int main () {
    int n1, n2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    resultado = somaintervalo(n1, n2);
    printf("A soma entre %d e %d eh %d\n", n1, n2, resultado);
    
    return 0;
}