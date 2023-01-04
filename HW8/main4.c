#include <stdio.h>
int round_func(float f) {
    int i = (int) f;
    if (f - i >= 0.5) {
        return i + 1;
    }
    else {
        return i;
    }
}

int main() {
    printf("%d\n", round_func(1.4));
    printf("%d\n", round_func(2.6));
    printf("%d\n", round_func(2.34));
    printf("%d\n", round_func(9.2344567789));
    return 0;
}
