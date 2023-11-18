#include<bits/stdc++.h>
#include<time.h>

using namespace std;

int main()
{
	time_t startTime, endTime;
	long long i,n;
	scanf("%lld", &n);
	time(&startTime);
	for(i=1;i<=n;i++);
	time(&endTime);
	printf("%lf seconds(s)", (double)(endTime -startTime));
	
	return 0;
}