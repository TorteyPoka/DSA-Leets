#include<iostream>

using namespace std;

int main()
{
    int n, r,c; //r=5, c=6
    cin>>n>>r>>c;
    while(n!=0)
    {
    for(int i=0; i<=r; i++)
    {
        for(int j=1; j<c; j++)
        {
            if(j%2==0)
            cout<<"1";
            else if(i%2==0)
            cout<<"0";
            else cout<<" ";
        }
        cout<<endl;
    }
    n--;
    }
}