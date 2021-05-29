#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int i,x,y,n;
        cin>>x>>y>>n;
        int ans;
        int rem=n%x;
        if(rem!=y){
            ans=n-rem;
            if(ans+y<=n)
                ans=ans+y;
            else
            {
                ans=ans-x+y;
            }
            
        }
        else
        {
            ans=n;
        }
        cout<<ans<<"\n";
        
    }

}