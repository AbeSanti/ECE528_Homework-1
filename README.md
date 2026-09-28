# ECE528_Homework-1
## Section I: Review Questions
**1.(a) What is the difference between a compiler and an interpreter?**
    The difference is that the compiler translates the code into machine code and the interpreter translates and executes the code.

**(b) What is the output of a C program's main() function by default?**
    By default the main() returns 0

**2. What are header files in C and what is the purpose of the #include directive?**
    The header files contain C declarations. The purpose of #include declares functions by inserting the contents of the header file into the source file.

**3. Explain how to declare and define a function in C. What is the purpose of the return statement in a function? Can a function have more than one return statement?**
    To declare and define a function it needs a name, return type, and parameters. The return statement is used to end the function. Yes a function can have more than one return statement.

**4. What is type casting? Provide an example C function that demonstrates explicit type casting from double to int. The function should accept two arguments that are both double and return their sum as an integer.**
    Type casting is changing a value from a data type to a different data type. 

        int main()
        {
            double a = 1.2;
            double b = 3.4;
            double sum = a + b;
            int x = (int)sum;
            printf("Sum of integer = %d\n",x);
            return 0;
        }

**5. Explain the difference between local and global variables. Provide an example of each.**
    The difference is that local variables are declared inside a function and can only be accessed in that function. A global variable is declared ouside of the functions and can be accessed by any function.
    
        int x = 123; // Global variable
        int main()
        {
            int y = 456; // local variable
            printf("%d",x);
            printf("%d",y);
        }

**6. How are strings declared and initialized in C? What is the role of the null terminator'\0'?**
    Strings are declared and initialized by using double quotes "". 
        char name[] = "ABCD";
    The null terminator '\0' signals the end of a character string.

**7. What is pointer in C? How do you pass a pointer to a function? What advantages are there to passing a pointer instead of a value?**
    A pointer is a function that stores the address of another variable.
        int x = 12;
        int *p = &x;
    Advantages is to modify the original variable.

**8. What does the * operator and the & operator do in context of pointers?**
    For pointers the * is a dereference operator which accesses the value stored at the address. Thhe & is the address of the operator which obtains the memory address of a variable.

**9. What is the difference between while and do...while loops?**
    The difference is that while loop executes a block of code as long as the condition is true. The do..while loop checks the condition after it executes the block to ensure that the loop is executed once.

**10. What does the break statement do? How is it different from the continue statement?**
    The break statement terminates the loop. The continue statement is different because it skips the current iteration of the loop and continues the next iteration.

**11. Explain the use of bitwise operators in C. Which bitwise operators can be used to set, clear, toggle, or check a specific bit in an integer variable?**
    Bitwise operators are used to control hardware registers. 
    To Set a bit use OR (|)
    To Clear a bit use AND (&) with an inverted mask
    To Toggle a bit use XOR (^)
    To Check a bit use AND (&)

**12. What is the purpose of the PxSEL0 and PxSEL1 GPIO registers? Write two statements that select the GPIO function for the pins P1.0 and P1.7.**
    PxSEL0 and PxSEL1 GPIO registers are used to select the function of the pin being configured.
        P1SEL0 &= ~((1<<0) | (1<<7));
        P1SEL1 &= ~((1<<0) | (1<<7));

**13. Write a void function named P1_1_and_P1_4_Init that configures P1.1 and P1.4 as GPIO inputs with pull-up resistors enabled.**
    void P1_1_and_P1_4_Init(void)
    {
        P1SEL0 &= ~((1<<1) | (1<<4));
        P1SEL1 &= ~((1<<1) | (1<<4));
        P1DIR &= ~((1<<1) | (1<<4));
        P1REN |= (1<<1) | (1<<4);
        P1OUT |= (1<<1) | (1<<4);
    }

**14. Write a void function named Buttons_Init that configures the following pins as GPIO inputs with pull-down resistors enabled. P3.1, P3.6, P5.0, P5.4.**
    void Buttons_Init(void)
    {
        P3SEL0 &= ~((1<<1) | (1<<6));
        P3SEL1 &= ~((1<<1) | (1<<6));
        P5SEL0 &= ~((1<<0) | (1<<4));
        P5SEL1 &= ~((1<<0) | (1<<4));
        P3DIR &= ~((1<<1) | (1<<6));
        P5DIR &= ~((1<<0) | (1<<4));
        P3REN |= (1<<1) | (1<<6);
        P5REN |= (1<<0) | (1<<4);
        P3OUT &= ~((1<<1) | (1<<6));
        P5OUT &= ~((1<<0) | (1<<4));
    }

**15. Write a void function named LEDs_Init that configures the following pins as GPIO outputs. Initialize the pins to zero. P7.0 to P7.7.**
    void LEDs_Init(void)
    {
        P7SEL0 = 0x00;
        P7SEL1 = 0x00;
        P7DIR = 0xFF;
        P7OUT = 0x00;
    }

## Section II: Programming Assignments
## Integer Sign & Magnitude
