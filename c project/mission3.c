#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	int n;
    int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
    lastdigit = abs(n % 10);
    if (n % 2==0)
    printf("the number %d is even \n",n);
    else 
    printf("the number %d is odd \n",n);
    if (lastdigit <5)
    printf("the last digit is %d  is grater than 5\n",lastdigit);
    else if (lastdigit >5)
    printf("the last digit is %d  is less than 5\n",lastdigit);
    else 
    printf("the last digit is %d  is equal to 5\n",lastdigit);
	return (0);
}