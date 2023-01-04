#include <stdio.h>
void print_top() {
    printf("   X'mas tree!\n");
}

void print_trunk() {
    for(int i = 0 ; i < 5 ; i++) {
        printf("       *\n");
    }
}

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

int main(){
    print_top();
    for(int i = 1 ; i <= 3 ; i++) {
        print_spaces(8 - i);
        print_stars(2 * i - 1);
    }
    for(int i = 1 ; i <= 5 ; i++) {
        print_spaces(8 - i);
        print_stars(2 * i - 1);
    }
    for(int i = 1 ; i <= 7 ; i++) {
        print_spaces(8 - i);
        print_stars(2 * i - 1); 
    }
    print_trunk();
    return 0;
}
