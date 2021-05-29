#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long 
#define endl "\n"
const int N = (int)(2*1e5 + 10);
vector<int> level(N,0);
vector<int> subtree(N,0);
vector<int> adj[N];
void dfs(int root,int par=-1,int lev=0){
    level[root]=lev;
    int cnt=0;
    for(auto it: adj[root]){
        if(it==par) continue;
        dfs(it,root,lev+1);
        cnt+=subtree[it];
    }
    subtree[root]+=(1+cnt);
}

void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    vector<int> contrib;
    for(int i=1;i<=n;i++){
        contrib.push_back(level[i]-subtree[i]+1);        
    }
    sort(contrib.begin(),contrib.end(),greater<int>());
    int sum=0;
    for(int i=0;i   <k;i++){
        sum+=contrib[i];
    }
    cout<<sum<<endl;
}

int32_t main(){
    solve();
};