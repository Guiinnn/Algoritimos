#include <stdio.h>

int main() {
    int horas, minutos;
    int minutos_total;

    //Ler
    printf("Digite as horas (0 a 23): ");
    scanf("%d", &horas);

    printf("Digite os minutos (0 a 59): ");
    scanf("%d", &minutos);

    //Calc
    minutos_total = (horas * 60) + minutos;

    printf("\n Resultado \n");
    printf("Horario informado: %02d :%02d\n", horas, minutos);
    printf("Minutos desde o inicio: %d minutos\n", minutos_total);

    return 0;
}