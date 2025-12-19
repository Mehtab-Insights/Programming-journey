#include <stdio.h>
int main ()
{
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    age >= 18 ? printf("You adult,you can drive the car\n") : printf("you not a adult\n");
    return 0;
}