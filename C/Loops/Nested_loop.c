#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 4; i++) {   // outer loop for rows
        for (j =1; j < i; j++) {  // inner loop for columns
            printf("*");
        }
        printf("\n");  // move to the next line after each row
    }
    return 0;
}

