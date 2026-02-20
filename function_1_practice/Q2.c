#include<stdio.h>
#include<cs50.h>

int sum(int a, int b)
{
    int solution = a + b;
    return solution;
}
int main()
{
    int a = get_int("Enter the first number: ");
    int b = get_int("Enter the second number: ");

    int solution = sum(a, b);

    printf("THe sum of %d and %d is %d\n", a, b, solution);
}