#include<stdio.h>
int main () {
    int age;
    
    // Prompting user to enter their age
    printf("Enter your age\n");
    
    // Taking input of age from user
    scanf("%d", &age);
    
    // Checking if age is above or equal to 90
    if (age >= 90) {
        // If age is above 90, informing user that they cannot drive
        printf("You are above 90, you cannot drive\n");
    }
    else {
        // If age is below 90
        printf("You can drive\n");
        
        // Checking if age is exactly 50
        if (age == 50) {
            // If age is 50, informing user that it's a half-century
            printf("Half century\n");
            return 0; // Exiting the program with success
        }
    }
    return 0; // Exiting the program with success
}
