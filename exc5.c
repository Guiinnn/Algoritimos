//Criar uma matriz tridimensional onde as linhas indicam as notas de matemática, história e
//geograﬁa em três provas de 10 alunos e criar uma função para veriﬁcar quantos alunos
//passaram em tudo, ou seja, os que tenham média aritmética >= 60 nas 3 disciplinas.

#include <stdio.h>

#define ALUNOS    10
#define DISCIPLINAS 3
#define PROVAS    3

// Função que conta quantos alunos passaram em todas as disciplinas
int aprovados(float notas[ALUNOS][DISCIPLINAS][PROVAS]) {
    int count = 0;

    for (int a = 0; a < ALUNOS; a++) {
        int passou_em_tudo = 1;  // Assume que passou até provar o contrário

        for (int d = 0; d < DISCIPLINAS; d++) {
            float soma = 0;
            for (int p = 0; p < PROVAS; p++)
                soma += notas[a][d][p];

            float media = soma / PROVAS;

            if (media < 60) {
                passou_em_tudo = 0;  // Reprovou em pelo menos uma disciplina
                break;
            }
        }

        if (passou_em_tudo)
            count++;
    }

    return count;
}

int main() {
    float notas[ALUNOS][DISCIPLINAS][PROVAS];
    char *disciplinas[] = {"Matematica", "Historia", "Geografia"};

    // Leitura das notas
    for (int a = 0; a < ALUNOS; a++) {
        printf("\n=== Aluno %d ===\n", a + 1);
        for (int d = 0; d < DISCIPLINAS; d++) {
            printf("  %s:\n", disciplinas[d]);
            for (int p = 0; p < PROVAS; p++) {
                printf("    Prova %d: ", p + 1);
                scanf("%f", &notas[a][d][p]);
            }
        }
    }

    printf("\nAlunos aprovados em todas as disciplinas: %d\n", aprovados(notas));

    return 0;
}