#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long
void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    int init=1;
    for(int i=1;i<=n;i++) cin>>arr[i];
    sort(arr+1,arr+n+1);
    int length=n;
    for(int i=n;i>=1;i--){
        if(arr[i]>length){
            length--;
            continue;
        }
    }
    cout<<length+1<<endl;
        
}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}