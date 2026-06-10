#include <stdio.h>

void intervalo(int n1, int n2) {
    int i, inicio, fim;

    if (n1 < n2) {
        inicio = n1;
        fim = n2;
    } else {
        inicio = n2;
        fim = n1;
    }

    i = inicio;
    while (i <= fim) {
        printf("%d\n", i);
        i++;
    }
}

int main() {
    int n1, n2;

    printf("Digite dois valores:\n");
    scanf("%d %d", &n1, &n2);

    intervalo(n1, n2);

    return 0;
}