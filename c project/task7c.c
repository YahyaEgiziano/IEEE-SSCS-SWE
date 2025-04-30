#include <stdio.h>

int main() {
    int i, j, k;

    // Loop for the first digit
    for (i = 0; i <= 7; i++) {
        // Loop for the second digit, starting from i+1 to ensure distinct digits
        for (j = i + 1; j <= 8; j++) {
            // Loop for the third digit, starting from j+1 to ensure distinct digits
            for (k = j + 1; k <= 9; k++) {
                // Print the three digits
                putchar(i + '0');  // Convert the digit to its ASCII equivalent
                putchar(j + '0');  // Convert the digit to its ASCII equivalent
                putchar(k + '0');  // Convert the digit to its ASCII equivalent

                // Print ", " unless it's the last combination
                if (i != 7 || j != 8 || k != 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');  // Move to the next line after printing all combinations
    return 0;
}
