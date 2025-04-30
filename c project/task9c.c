#include <stdio.h>

int main() {
    int n, i, j, result;

    // Read the value of n
    printf("enter your number : ");
    scanf("%d", &n);

    // Check if n is within the valid range
    if (n < 0 || n > 15) {
        return 0;  // Do not print anything if n is outside the range [0, 15]
    }

    // Loop through each row (0 to n)
    for (i = 0; i <= n; i++) {
        // Loop through each column (0 to n)
        for (j = 0; j <= n; j++) {
            result = i * j;  // Calculate the product of i and j

            // Print the result
           printf("%d",result);
            // Print a comma and space after each number except the last one
            if (j != n) {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');  // Move to the next line after each row
    }

    return 0;
}
