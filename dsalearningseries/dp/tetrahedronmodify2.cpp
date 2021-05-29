#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define N 10000000

int n;
int dp[2][N];

int32_t main()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    dp[1][0]=1;
    dp[0][0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[1][i]=(3*dp[0][i-1])%mod;
        dp[0][i]=(2*dp[0][i-1]+dp[1][i-1])%mod;
    }
    cout<<dp[1][n]%mod;
}