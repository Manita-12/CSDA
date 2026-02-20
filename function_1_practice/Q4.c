#include<stdio.h>
#include<cs50.h>
#include<math.h>

int square(int num)
{
    int result = num * num;//int result = pow(num, 2);
    return result;
}
int main()
{
    int num = get_int("Enter a number: ");

    int result = square(num);//int result = (int) pow(num, 2);

    printf("The squre of %d is %d\n", num, result);
}
