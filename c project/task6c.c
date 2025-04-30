#include <stdio.h>

int main() 
{
     
    for (int i = 48; i <= 56; i++) {
        
        for (int j = i + 1; j <= 57; j++) {
            putchar(i);  
            putchar(j);  
            
            if (!(i == 56 && j == 57)) {
                putchar(',');  
                putchar(' ');  
            }
        }
    }
    putchar('\n');  
    return 0;
}