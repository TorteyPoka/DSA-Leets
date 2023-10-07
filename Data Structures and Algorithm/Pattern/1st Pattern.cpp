//Solved by: Sakhwat Hossain Mahin
//ID: 213071026

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j>=1;j--)
            {
                if(j%2)
                cout<<"1"<<" ";
                else cout<<"0"<<" ";
            }
            cout<<endl;
        }
    }
}