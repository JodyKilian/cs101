#include <stdio.h>
int main() {
    double PI = 0.0;
    int i = 1;
    for (i = 1; i<500000; i++) {
        if (i & 1)
            PI += 4.0/(2*i-1);
        else
            PI -= 4.0/(2*i-1);
        if ((int) (PI*100000) == 314159)
            break;
    }
    printf("x=%d, PI=%.5f\n", 2*i-1, (double) (int) (PI*100000)/100000);
    return 0;
}
