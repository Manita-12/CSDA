#include<stdio.h>
#include<cs50.h>

void check(int a)
{
    if(a % 2 == 0)
    {
        printf("%d is even number\n", a);
    }
    else
    {
        printf("%d is odd number\n", a);
    }
}

int main()
{
    int a = get_int("Enter a number: ");

    check(a);
    return 0;
}
