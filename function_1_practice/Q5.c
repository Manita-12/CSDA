#include<stdio.h>
#include<cs50.h>

void inputArray(int arr[], int num)
{
    for(int i = 0; i < num; i++)
    {
        arr[i] = get_int("Enter number %d: ", i+1);
    }
    printf("\n");
}

void printArray(int arr[], int num)
{
     for(int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int num = get_int("How many element do you want? ");
    int arr[num];
    inputArray(arr, num);
    printArray(arr, num);
}
