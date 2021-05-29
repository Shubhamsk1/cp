#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long

void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ans=(x-a)*(y-b)+1;
    cout<<ans<<endl;
}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}