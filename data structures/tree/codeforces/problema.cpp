#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int giveme_num(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}


int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=giveme_num(n);
        n=n+ans;
        n=n+2*(k-1);
        cout<<n<<"\n";
    }
    return 0;
}