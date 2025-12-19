#include <stdio.h>

void hello(int a) {
    if (a == 0) {
        return;
    }
    printf("Hello world!\n");
    hello(a - 1); // Recursive call with decremented value of a
}

int main() {
    hello(10);
    return 0;
}
