#include<stdio.h>
int main()
{
    int i, n, sum=0;
    int position, value;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array: ");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
        sum+=arr[i];
    }

    printf("\nTotal value of the array is: %d", sum);

 return 0;
}
