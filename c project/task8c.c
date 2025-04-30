#include <stdio.h>
int main()

{
    int result;
    for(int i =0;i<=9;i++)
    {
        for (int j = 0;j<10;j++)
        {
            result = i*j;
            putchar(result /10+'0');
            putchar(result %10+'0');
            if (j !=9)
            {
                putchar(',');
                putchar(' ');
            }

        }
        putchar('\n');
    }

}