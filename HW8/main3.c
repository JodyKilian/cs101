#include <stdio.h>
void get_binary(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
        if ((j + 1) % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    get_binary(6);
    get_binary(16);
    get_binary(255);
    return 0;
}
