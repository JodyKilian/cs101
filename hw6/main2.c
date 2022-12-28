#include <stdio.h>

int main() {
    int i = 10;
    printf("Enter Number: %d\n",i);
    if(i % 2 == 0)
        printf("%d is even.", i);
    else
        printf("%d is odd.", i);
    return 0;
}
