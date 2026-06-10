#include <stdio.h>
#include <math.h>

int main () {
    float inv = 30000;
    int temp = 7;
    float taxa = 0.1472;
    float montante;

    montante = inv * pow((1 + taxa), temp);

    printf("Montante final: R$ %.2f\n", montante);

    return 0;
}