#include<stdio.h>
int main()
{
    int n, i;

    int arr[100];
    int arr2[100];
    int flagArr[100];

    printf("Enter the size: \n");
    scanf("%d", &n);

    printf("First array input: \n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

     printf("\nSecond array input: \n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }


    for(i=0; i<n; i++)
    {
        flagArr[i]=arr[i];
        arr[i]=arr2[i];
        arr2[i] = flagArr[i];
    }

    printf("\nPrinting after swapping:");
    printf("\nArray 01:");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray 02: ");
     for(i=0; i<n; i++)
        printf("%d ", arr2[i]);

        return 0;
}

