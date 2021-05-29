#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long
void solve(){
    int n,m;
    cin>>n>>m;
    int prod=n*m;
    int div=prod/2;
    int rem=prod%2;
    cout<<div+rem<<endl;
}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}