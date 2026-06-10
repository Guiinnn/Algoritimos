//Fazer um algoritmo para ler uma matriz 6 x 3 e uma função para gerar duas matrizes 3 x 3, a
//primeira com as 3 primeiras linhas e a segunda com as restantes.

#include <stdio.h>

#define LINHAS 6
#define COLUNAS 3
#define N 3

// Função que divide a matriz 6x3 em duas matrizes 3x3
void dividir(int mat[LINHAS][COLUNAS], int primeira[N][N], int segunda[N][N]) {
    // Primeiras 3 linhas → primeira matriz
    for (int i = 0; i < N; i++)
        for (int j = 0; j < COLUNAS; j++)
            primeira[i][j] = mat[i][j];

    // Últimas 3 linhas → segunda matriz
    for (int i = 0; i < N; i++)
        for (int j = 0; j < COLUNAS; j++)
            segunda[i][j] = mat[i + N][j];
}

// Função auxiliar para imprimir uma matriz 3x3
void imprimir(int mat[N][N], char nome[]) {
    printf("\n%s:\n", nome);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int mat[LINHAS][COLUNAS];
    int primeira[N][N], segunda[N][N];

    // Leitura da matriz 6x3
    printf("Digite os elementos da matriz 6x3:\n");
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

    // Divide e imprime
    dividir(mat, primeira, segunda);
    imprimir(primeira, "Primeira matriz (linhas 0 a 2)");
    imprimir(segunda,  "Segunda matriz  (linhas 3 a 5)");

    return 0;
}