#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define N 10000000

int n;
int dp[2][N];
int go(int same,int steps)
{
    if(dp[same][steps]>=0)
        return dp[same][steps];
    if(steps==0)
    {
        if(same==1)
        {
            dp[same][steps]=1;
            return 1;
        }
        dp[same][steps]=0;
        return 0;
    }
    int &ans=dp[same][steps];
    if(same==1)
    {
        ans=(3*go(0,steps-1))%mod;
        return ans;
    }
    else{
        ans=(2*go(0,steps-1)+go(1,steps-1))%mod;
        return ans;
    }
}
int32_t main()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int ans=go(1,n);
    cout<<ans;
}