#include<stdio.h>
int main()
{
    int i, n;
    int position, value;
    int arr[100];

    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    printf("Enter the elements: \n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal form: ");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nIn reverse form: ");

    for(i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
