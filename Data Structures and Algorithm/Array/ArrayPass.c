#include<stdio.h>
int main()
{
    int i, n;
    int arr[100];
    int arr2[100];

    printf("Enter the size: \n");
    scanf("%d", &n);

    printf("First array input: \n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Printing the main array: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(i=0; i<n; i++)
    {
        arr2[i]=arr[i];
    }

    printf("Printing after swapping, \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }



    return 0;
}
