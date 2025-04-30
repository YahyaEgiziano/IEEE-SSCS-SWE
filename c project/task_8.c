#include <stdio.h>

void isEven(int n) {
    
	if (n % 2 == 0) 
		printf("%d is envn\n", n);
	 else 
    
		printf("%d is odd", n);
}

void calculateArea(float n) {
	if (n  == 0) 
    {
		printf("no radius specified");
	}
    else if (n<0)
    {
        printf("redius cant be negative");
    }
     else {
		printf("the radius exists and its value = %d",n);
	}
}

int main() {
    int n ;
    printf("enter your number : ");
    scanf ("%d",&n);
    isEven(n);
    float radius ;
    printf("enter your radius : ");
    scanf ("%f",&radius);
    calculateArea(radius);



}