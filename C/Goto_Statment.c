#include <stdio.h>

int main() {
    int choice;
ss: // Label for goto
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected 1\n");
            goto Yes;
        case 2:
            printf("You selected 2\n");
            goto Yes;
        case 3:
            printf("You selected 3\n");
            goto Yes;
        default:
            printf("Invalid choice\n");
            break;
    }
Yes: // Label for goto
    printf("Do you want to select again? (y/n): ");
    char decision;
    scanf(" %c", &decision);

    if (decision == 'y' || decision == 'Y')
        goto ss; // Jump back to the ss label
    return 0;
}
