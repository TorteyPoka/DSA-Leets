#include<stdio.h>
int main()
{
    int i, n;

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
        if(i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
