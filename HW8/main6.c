#include <stdio.h>
void print_spaces(int x){
    for(int i = 0 ; i < x ; i++) {
        printf(" ");
    }
}

void print_stars(int x){
    for(int i = 0 ; i < x; i++) {
        printf("*");
    }
    printf("\n");
}

void print_body(int x){
    for(int i = 1 ; i <= (2 * x) - 1 ; i++) {
        printf("*");
    }
    printf("\n");
    for(int i = 0 ; i < x ; i++) {
        printf("*%*c*\n", (2 * x) - 3,' ');
    }
    for(int i = 1 ; i <= (2 * x) - 1 ; i++) {
        printf("*");
    }
    printf("\n");
}

int main(){
    int n = 4;
    for(int i = 1 ; i <= n ; i++) {
        print_spaces(n - i);
        print_stars(2 * i - 1);
    }
    print_body(n);
    return 0;
}
