#include <stdio.h>
int main() {
    int i = 15;
    int count = 0;
    while(i > 0) {
        if(i % 2 == 1) {
            count++;
        }
        i /= 2;
    }
    printf("%d\n", count);
    return 0;
}
