#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        ans=ans+4*(i-1);
    }
    cout<<ans;
}