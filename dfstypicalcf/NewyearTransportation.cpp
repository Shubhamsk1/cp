#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n,t;
    cin>>n>>t;
    int i=1;
    int arr[n+1];
    for(int i=1;i<=n-1;i++)   
        cin>>arr[i];
    int k=1;
    int flag=0;
    while(k<=n){
        k=k+arr[k];
        if(k==t){   
            flag=1;
            break;
        }
   
    }
    if(k==t) flag=1;
    if(!flag) cout<<"NO";
    else cout<<"YES";
    
}

int32_t main(){
    IOS;
    solve();
}