    #include <stdio.h>

    int main () {
        int v1, v2;

        scanf("%d %d", &v1, &v2);
        for (int i = v1; i <= v2; i++) {
            printf("%d\n", i);
        }

        for (int i = v2; i <= v1; i++) {
            printf("%d\n", i);
        }

        return 0;
    }