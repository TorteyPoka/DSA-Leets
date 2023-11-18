/*
Prepared by,
Sakhawat Hossain Mahin (with help)
ID: 213071026
Semester: 5th
Batch: 28th
SMUCT
*/

#include <iostream>
using namespace std;

int getMax(int* arr, int n) 
{
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

void counting(int* arr, int n, int exp) 
{
    const int radix = 10;
    int output[n];
    int count[radix] = {0};

    for (int i = 0; i < n; i++) 
    {
        count[(arr[i] / exp) % radix]++;
    }

    for (int i = 1; i < radix; i++) 
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        output[count[(arr[i] / exp) % radix] - 1] = arr[i];
        count[(arr[i] / exp) % radix]--;
    }

    for (int i = 0; i < n; i++) 
    {
        arr[i] = output[i];
    }
}

void radixSort(int* arr, int n) 
{
    int max = getMax(arr, n);

    for (int exp = 1; max / exp > 0; exp *= 10) 
    {
        counting(arr, n, exp);
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

    radixSort(arr,n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
