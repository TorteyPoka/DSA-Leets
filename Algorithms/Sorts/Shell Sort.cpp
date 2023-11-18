/*
Prepared by,
Sakhawat Hossain Mahin
ID: 213071026
Semester: 5th
Batch: 28th
SMUCT
*/

#include <iostream>
using namespace std;

void shellSort(int* arr, int n) 
{
    for (int gap = n / 2; gap > 0; gap /= 2) 
    {
        for (int i = gap; i < n; i++) 
        {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
            {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
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

    shellSort(arr,n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}