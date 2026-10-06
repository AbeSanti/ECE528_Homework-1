//# ECE 528/L Abraham Santiago
//## HW 1: Bit Counter

#include <stdio.h>

int main(void)
{
    int num;
    int n;
    int i = 0;

    printf("ECE 528/L - Abrham Santiago - HW1\n");
    printf("Enter a non-negative integer: "); // Prompt
    scanf("%d", &num);

    // Checks for valid integer
    if (num < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }
    else
    {
        n = num;
        while (n != 0)
        {
            n &= (n - 1); // counts the set bits
            i++;
        }
        printf("Number of bits set in %d: %d\n", num, i);
    }
    return 0;
}