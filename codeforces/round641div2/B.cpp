#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int arr[100001];
int n;
int dp[100001];

int fun(int index){
    if(dp[index]!=-1) return dp[index];
    if(index>n) return 0;
    int count = 0;
    for(int i=2*index;i<=n;i+=index){
        if(arr[index]<arr[i])
            count = max(count,1+fun(i)); 
    }
    return dp[index]=count;
}

void solve(){
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)cin>>arr[i];
    int maxi=1;
        for(int i=1;i<=n;i++){
            maxi=max(maxi,1+fun(i));    
    }
    cout<<maxi<<endl;
}
int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}