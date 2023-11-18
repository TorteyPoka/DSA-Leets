/*
Prepared by,
Sakhawat Hossain Mahin
ID: 213071026
Semester: 5th
Batch: 28th
SMUCT
*/

#include <iostream>
#include <algorithm>

using namespace std;

int partition(int* arr, int l, int h) 
{
    int pivot = arr[l]; 
    int i = l + 1;     

    for (int j = l + 1; j <= h; j++) 
    {
        if (arr[j] < pivot) 
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[l], arr[i - 1]);

    return i - 1;
}

void quicksort(int* arr, int l, int h) 
{
    if (l < h) 
    {
        int pi = partition(arr, l, h);

        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, h);
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

    quicksort(arr,0,n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}