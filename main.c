#include <stdio.h>

void exemplo(int x) {
    if (x > 0) {
        printf("X é positivo!\n");
    } else {
        printf("X não é positivo!\n");
    }
}

int main() {
    exemplo(5);
    exemplo(-3);
    return 0;
}