#include <stdio.h>
int main ()
{
    int num ;
    printf("Enter ur number from 1 to 9 : ");
    scanf("%d",&num);
    if (num <=9 && num >=1)
    {
        printf("your character is : %c",num);

    } 
    else 
    printf("invalid number");
    return 0;
}