//Fazer um algoritmo para ler uma matriz quadrada de dimensão 10, uma função para encontrar
//o maior valor desta matriz e outra função para encontrar o menor valor. Imprimir os valores
//encontrados na função principal.

#include <stdio.h>

#define N 10

// Função para encontrar o maior valor da matriz
int maior(int mat[N][N]) {
    int max = mat[0][0];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] > max)
                max = mat[i][j];
    return max;
}

// Função para encontrar o menor valor da matriz
int menor(int mat[N][N]) {
    int min = mat[0][0];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] < min)
                min = mat[i][j];
    return min;
}

int main() {
    int mat[N][N];

    // Leitura da matriz
    printf("Digite os %d elementos da matriz %dx%d:\n", N * N, N, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

    // Impressão dos resultados
    printf("\nMaior valor da matriz: %d\n", maior(mat));
    printf("Menor valor da matriz: %d\n", menor(mat));

    return 0;
}