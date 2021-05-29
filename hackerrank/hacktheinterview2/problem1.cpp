#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"
#define MOD (1000000000+7)

int a[1000000];

int32_t main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n);
    int sum=0,totalsum=0,t;
    int count=1;
    int i=1;
    int x=1;
    t=m;
    while(count<=t)
    {
        sum=0;
        if(count==t)
        {
            for(;i<=n;i++)
            {
                sum=sum+a[i];
            }

        }
       else{
            for(;i<=m;i++)
            {
                sum=(sum+a[i])%MOD;
            }
       }
        totalsum=totalsum+sum*x%MOD;
        x++;
        i=m+1;
        m=m+m;
        count++;
    }
    cout<<totalsum%MOD;
}   