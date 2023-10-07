#include<stdio.h>
int main()
{
    int i, n;
    int position;
    int val;

    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Please enter the elements...\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array, \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the position you want to insert: \n");
    scanf("%d", &position);

    printf("\nEnter the value: \n");
    scanf("%d", &val);

    for(i=n-1; i>=position-1; i--)
    {
        arr[i+1] = arr[i] ;
    }

    arr[position-1] = val;

    n++;

    printf("\nUpdated array, \n");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
