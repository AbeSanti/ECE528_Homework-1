//# ECE 528/L Abraham Santiago
//## HW 1: Integer Sign & Magnitude

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int absvalue;

    printf("ECE 528/L - Abrham Santiago - HW1\n");
    printf("Enter an integer: "); // Prompt
    scanf("%d", &num);

    // Classifing the sign
    if (num > 0)
    {
        printf("%d is positive.\n", num);
    }
    else if (num < 0)
    {
        printf("%d is negative.\n", num);
    }
    else
    {
        printf("%d is zero.\n", num);
    }

    // Computing absolute value
    absvalue = abs(num);
    printf("Absolute value: %d\n", absvalue);
    return 0;
}