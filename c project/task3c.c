#include <stdio.h>
int main ()
{
    char ch;
    printf("Enter your letter : ");
    scanf ("%c",&ch);
    if (ch>='a' && ch<='z' )
    printf("lowre case");
    else if (ch>='A' && ch<='Z' )
    {
        printf("UPPER CASE");

    }
    else 
    printf("its not a letter");
    return 0;
}