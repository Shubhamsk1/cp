#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char ch=s[n-1];
    string ans="";
    for(int i=0;i<n;i++){
        ans.push_back(ch);
    }
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