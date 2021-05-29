#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"
void solve(){
    int n,x,m;
    cin>>n>>x>>m;
    int arr[n+1]={0};
    arr[x]=1;
    int ans=0;
    for(int i=0;i<m;i++){
        int l, m;
        cin>>l>>m;
        int flag=0;
        for(int i=l;i<=m;i++){
            if(arr[i]==1){
                flag=1;
                break;}
        }
        if(flag){
            for(int i=l;i<=m;i++)
                arr[i]=1;
        }
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==1)
            count++;
    }
    cout<<count<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}