#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"
const int N=31;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> matrix[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            matrix[i].push_back(x);
        }
    }
    vector<vector<int>>cnt(n+m-1,vector<int>(2));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cnt[i+j][matrix[i][j]]++;
        }
    }
    int ans=0;
    for(int i=0;i<=n+m-2;i++){
        int j=n+m-2-i;
        if(i>=j) continue;
        ans+=min(cnt[i][0]+cnt[j][0],cnt[i][1]+cnt[j][1]);
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