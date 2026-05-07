#include <stdio.h>

int main () {
    int semana;

    printf("Digite o dia da semana: ");
    scanf("%d", &semana);

        if (semana ==1) printf("Domingo");
        else if (semana ==2) printf("Segunda");
        else if (semana ==3) printf("Terça");
        else if (semana ==4) printf("Quarta");
        else if (semana ==5) printf("Quinta");
        else if (semana ==6) printf("Sexta");
        else if (semana ==7) printf("Sabado");
        else printf("Valor Invalido");

    return 0;
}