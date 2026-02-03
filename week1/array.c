#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    for(int i=0; i<n; i++)// (i=1; i<=n; i++)
    {
        printf("Enter element %i: ",i+1);
        scanf("%d", &array[i]);
    }
    printf("The elements in the array are: ");
    for (int i=0; i<n; i++)//for printing an element again; (i=1; i<=n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}
// this code takes n elements as input from the user and stores them in an array, then prints the elements of the array.