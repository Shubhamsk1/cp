#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long 
#define MOD (1000000000+7)

int fastmodexp(int a,int b)
{
    int result=1;
    while(b>0)
    {
        if(b&1)
        {
            result=(result*a)%MOD;
        }
        a=(a*a)%MOD;
        b=b>>1;
    }
    return result;
}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        int sum=0;
        cin>>n>>a;
        for(int i=1,j=1;i<=n;i++,j+=2)
        {
            int x=fastmodexp(a,j);
            sum=(sum+x)%MOD;
            a=(a*x)%MOD;
        }
        cout<<sum<<endl;
    }
}