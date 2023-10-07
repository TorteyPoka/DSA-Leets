#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to return the required element
int getElement(int a[], int n, int S)
{
	// Sort the array
	sort(a, a + n);

	int sum = 0;

	for (int i = 0; i < n; i++)
        {
		// If current element
		// satisfies the condition
		if (sum + (a[i] * (n - i)) == S)
		{
		    return a[i];
            sum += a[i];
        }
        }

	// No element found
	return -1;
}

// Driver code
int main()
{
	int S = 5;
	int a[100] = { 1, 3, 2, 5, 8 };
	int n = sizeof(a) / sizeof(a[0]);

	cout << getElement(a, n, S);

	return 0;
}


