#include<stdio.h>
#include<cs50.h>
int main()
{
    int num1 = get_int("Enter the first number: ");

    printf("The first number is: %d\n", num1);
        num1++;
        printf("The first number after incrementing is: %d\n", num1);
    printf("The first number before decrementing is: %d\n", num1);
        num1--;
        printf("The first number after decrementing is: %d\n", num1);   

    return 0;

}
