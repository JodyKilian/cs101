#include <stdio.h>
void add_digits(int x) {
    int sum = 0;
    if(x < 0) {
        x = x*-1;
        while(x >= 10) {
            sum += (x % 10);
            x /= 10;
        }
        sum += (-1 * x) % 10;
    } else {
        while(x != 0) {
            sum += (x % 10);
            x /= 10;
        }
    }
    printf("%d\n", sum);
}

int main() {
    int a = -999;
    int b = 999;
    add_digits(a);
    add_digits(b);
    return 0;
}
