#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

void solve(){
    int p,f;
    cin>>p>>f;
    int cntx,cnty;
    cin>>cntx>>cnty;
    int wx,wy;
    cin>>wx>>wy;
    int find=p+f;
    int a=ceil(wy*wy/float(wx));
    int k= a+wx;
    int x=(find/float(k));
    int y=(a*x);
    int ans= min(x+y,cntx+cnty);
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