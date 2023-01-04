#include <stdio.h>
void get_digit(int n) {
    while(n != 0) {
        printf("%d", n % 10);
        n /= 10;
    }
}

int main() {
    int n = 1234;
    printf("sum = ");
    get_digit(n);
    return 0;
}
