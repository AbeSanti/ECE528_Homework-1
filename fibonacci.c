//# ECE 528/L Abraham Santiago
//## HW 1: Fibonacci

#include <stdio.h>

int main(void)
{
    int num;
    int n1=0;
    int n2=1;
    int n3;

    printf("ECE 528/L - Abrham Santiago - HW1\n");
    printf("Enter n (2 or greater): "); // Prompt
    scanf("%d", &num);

    if (num < 2) // Checks if a valid integer is entered if not outputs an error message
    {
        printf("Invalid Input. Please enter a non-negative integer.\n", num);
    }
    else
    {
        printf("Fibonacci sequence up to 10 terms:\n");
        printf("%d %d ", n1, n2);
        for (int i=num-2; i>=0; i--) // subtracts given number by 2 b/c two numbers will be already printed
        {                            // loops untill given number isnt >= to 0
            n3 = n1 + n2;
            printf("%d ", n3);
            n1 = n2;
            n2 = n3;
        }
    }
    return 0;
}