#include <stdio.h>
void print_spaces(int x) {
    for(int i = 0 ; i < x ; i++) {
        printf(" ");
    }
}

void print_stars(int x) {
    for(int i = 0 ; i < x; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int i = 4;
    for(int x = 1 ; x <= i ; x++) {
        print_spaces(x - 1);
        print_stars(2 * (i - x + 1) - 1);
    }
    for(int x = 1 ; x <= i - 1 ; x++) {
        print_spaces(3 - x);
        print_stars(i + (2 * x) - 3);
    }
    return 0;
}
