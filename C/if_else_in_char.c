#include <stdio.h>  

int main() 
{
 char ch;
 printf("Write a charactor\n");
 scanf("%c",&ch);

 if (ch >= 'A' && ch <='Z' )
 {
    printf("Upper casse\n");
 }
 else if (ch >= 'a' && ch <= 'z')
 {
    printf("Lower case\n");
 }
 else {
    printf("you enter not a english letter\n");
 }
     return 0;
}