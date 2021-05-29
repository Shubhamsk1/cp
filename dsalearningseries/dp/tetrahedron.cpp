#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define N 10000000
int n;
int dp[4][N];
int go(int src,int dest,int steps)
{
    if(dp[src][steps]>=0)
        return dp[src][steps];
    if(steps==0)
    {
        if(src==dest)
        {
            dp[src][steps]=1;
            return 1;
        }
        dp[src][steps]=0;
        return 0;
    }
    int ans=0;
    for(int i=0;i<=3;i++)
    {   if(i==src)
            continue;
        ans+=go(i,dest,steps-1);
        if(ans>=mod)
            ans=ans%mod;
        dp[src][steps]=ans;
    }
    return ans;
}
int32_t main()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int ans=go(3,3,n);
    cout<<ans;
}