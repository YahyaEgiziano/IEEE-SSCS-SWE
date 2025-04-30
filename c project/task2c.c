#include <stdio.h>
int main()
{
    char ch;
    for (int i =1;i<=5;i++)
    {
    for (ch='a';ch<='z';ch++)
    {
        if (ch != 'q')
        {
            putchar(ch);
        }
        
    }
    putchar('\n');
}   
        return 0;
    }