#include <stdio.h>

int somaintervalo(int n1, int n2) {
    int soma = 0;

    if(n1 <= n2) {
        int i = n1;
        while ( i <= n2) {
            soma += i;
            i++;
        }
}
    else {
        int i = n1;
        while (i >= n2) {
            soma += i;
            i--;
        }
    }

return soma;
}
int main () {
    int n;

    n = somaintervalo(3,6);
    printf("somaintervalo(3, 6) = %d\n", n);
    n = somaintervalo(5,5);
    printf("somaintervalo(5, 5) = %d\n", n);
    n = somaintervalo(4,0);
    printf("somaintervalo(4, 0) = %d\n", n);

    return 0;
}