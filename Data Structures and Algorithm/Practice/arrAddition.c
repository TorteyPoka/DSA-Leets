#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Please enter the elements...\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
        sum+=arr[i];
    }

    printf("\nThe total here is, %d", sum);

    return 0;
}
