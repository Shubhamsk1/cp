#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a,b;
    cin>>a>>b;
    int x=(a<b?a:b);
    int maxs=0;
    int ans=0;
    int k=floor((a+b)/3.0);
    if(x==a){
        maxs = 2*a+1;
        if(b <= maxs){
            ans= ans + k;
        }else{
            ans=a;
        }
    }
    else{
        maxs=2*b+1;
        if(a<=maxs){
            ans= ans + k;
        }else{
            ans=b;
        }
    }
    cout<<ans<<endl;


}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}