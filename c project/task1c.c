#include <stdio.h>
int main()
{
    char ch;
    for (ch='a';ch<='z';ch++)
    {
        if (ch != 'q')
        {
            putchar(ch);
        }
    }
    for (ch='Z';ch>='A';ch--)
    {
        if (ch != 'Q')
        {
            putchar(ch);
        }
    }
}