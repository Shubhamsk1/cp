#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int arr[6][6];
    int x,y;
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
        {    
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    int ans=abs(3-x)+abs(3-y);
    cout<<ans;
    
}