#include<cs50.h>
#include<stdio.h>
int main()
{
    int num1, num2, sum, diff, prod, quot, rem;// declare variables
    num1 = get_int("Enter first integer: ");// get input
    num2 = get_int("Enter second integer: ");

    sum = num1 + num2;// perform operations
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    rem = num1 % num2;  

    printf("Sum: %d\n", sum);// output results
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    printf("Remainder: %d\n", rem); 

    return 0;// end program
}