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

    printf("\nOriginal form, ");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nWhat position do you want to enter an element? \n");
    scanf("%d", &position);

    printf("\nEnter the value to insert: \n");
    scanf("%d", &value);

    for(i=n-1; i>=position-1; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[position-1]=value;

    n++;

    printf("\nUpdated array, \n");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

return 0;
}
