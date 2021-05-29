#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int arr[10001];
int dp[10001][10001];
int delish(int i,int j,int k,int l)
{
    if(dp[j][k]!=-1)
        return dp[j][k];
    int sum1=0,sum2=0;
    for(int x=i;x<=j;x++)
        sum1=sum1+arr[x];
    for(int x=k;x<=l;x++)
        sum2=sum2+arr[x];
    int diff=abs(sum2-sum1);
    if(k==l|| j==k-1)
    {
        dp[j][k]=diff;
        return dp[j][k];
    }
    else
    {
        int value1=max(diff,delish(i,j+1,k+1,l));
        int value2=max(diff,delish(i,j,k+1,l));
        dp[j][k]=max(value1,value2);
        return dp[j][k];
    }
}
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        sort(arr+1,arr+n);
        int ans=delish(1,1,2,n);
        cout<<ans<<"\n";
    }
}