#include <stdio.h>
int main() {
    int i = 10;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
  
    if(i > 0) {
        while(i % 2 == 0) {
            i = i / 2;
        }
        if(i == 1) {
            printf("%d is true", n);
        } else {
            printf("%d is false", n);
        }
    }
    return 0;
}
