#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int arr[n+1][4];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=3;j++)
            cin>>arr[i][j];
    int sum=0;
    for(int i=1;i<=n;i++)
        sum=sum+arr[i][1];
    if(sum!=0)
        cout<<"NO";
    else if(sum==0)
    {   sum=0;
        for(int i=1;i<=n;i++)
                sum=sum+arr[i][2];
        if(sum!=0)
            cout<<"NO";
        else
        {   
            sum=0; 
            for(int i=1;i<=n;i++)
                sum=sum+arr[i][3];     
            if(sum!=0)
                cout<<"NO";
            else
            {
                cout<<"YES";
            }
            
        }   
    }
}