// Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. 

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media aritmetica desses valores e: %.2f", media);
    return 0;
}