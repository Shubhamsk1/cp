#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"

void solve(){
    int n,k;
    cin>>n>>k;
    int mp;
    
 if(n>=k)
    cout<<(n-k)%2<<endl;
    else
    {
        cout<<k-n<<endl;
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