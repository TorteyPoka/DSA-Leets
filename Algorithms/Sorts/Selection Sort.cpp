/*
Prepared by,
Sakhawat Hossain Mahin
ID: 213071026
Semester: 5th
Batch: 28th
SMUCT
*/

#include<iostream>

using namespace std;

void selectionSort(int* ar, int n)
{
    int i, j, minDX, temp = 0;
    for(i = 0; i<n; i++)
    {
        minDX = i;
        for( j = i+1; j<n; j++)
        {
            if(ar[j] < ar[minDX])
            {
                minDX = j;
            }
        }
        if(minDX != i)
        {
            temp = ar[i];
            ar[i] = ar[minDX];
            ar[minDX] = temp;
        }
        cout << ar[i] << " ";
    }
}

int main()
{
    int n;
    cin>>n;

    int ar[n];

    for(int i = 0; i<n; i++)
    {
        cin>>ar[i];
    }

    selectionSort(ar, n);

    return 0;
}