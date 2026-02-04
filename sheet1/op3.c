#include<cs50.h>
#include<stdio.h>
int main()
{
    int num1 = get_int("Enter integer: ");//get input

    printf("You entered: %d\n", num1);

    if(num1 % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }       
    return 0;
    // get input
}