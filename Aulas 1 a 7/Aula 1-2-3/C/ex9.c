#include <stdio.h>

int main() {
    int  A = 3, B = 7, C = 4;

     printf("%d\n", (A + C) > B);
     printf("%d\n", B >= (A + 2));
     printf("%d\n", C == (B-A));
     printf("%d\n", (B + A) <= C);
     printf("%d\n", (C + A) >B);

     return 0;

}