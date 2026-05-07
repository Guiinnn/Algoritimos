#include <stdio.h>

int main () {

    int dist = 110;
    
    float temp = 1 + (50.0 / 60.0);
    float vel_med = dist / temp;

    printf("%.2f\n", vel_med);
    
    return 0;
}