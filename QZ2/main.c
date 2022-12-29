#include <stdio.h>

void print_spaces(int r, int rows) {
    for(int space = r; space < rows; space++) {
        printf("  ");
    }
}

void print_stars(int r) {
    for(int stars = r * 2 - 1; stars > 0; stars--) {
        printf("* ");
    }
}

int main() {
    int rows = 5;
    for(int i = rows; i >= 1; --i) {
        print_spaces(i ,rows);
        print_stars(i);
        printf("\n");
    }
    return 0;
}
