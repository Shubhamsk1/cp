//ED87 A
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b){
        cout<<b<<endl;
    }
    else{
        if(c>d){
            int ans = ceil(float(a-b)/float(c-d));
            cout<<ans*c+b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}