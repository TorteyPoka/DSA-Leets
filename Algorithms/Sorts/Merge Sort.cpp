#include <iostream>

using namespace std;

void merge(int* arr, int left, int middle, int right) 
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int Left[n1];
    int Right[n2];


    for (int i = 0; i < n1; ++i)
        Left[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        Right[j] = arr[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) 
    {
        if (Left[i] <= Right[j]) 
        {
            arr[k] = Left[i];
            ++i;
        } else {
            arr[k] = Right[j];
            ++j;
        }
        ++k;
    }


    while (i < n1) 
    {
        arr[k] = Left[i];
        ++i;
        ++k;
    }


    while (j < n2) 
    {
        arr[k] = Right[j];
        ++j;
        ++k;
    }
}


void mergeSort(int* arr, int l, int r) 
{
    if (l < r) 
    {
        
        int mid = l + (r - l) / 2;

        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main() 
{
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
