#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    int sum = 0;  
    for(int i=n-1;i>0;i--){
        if(arr[i-1]>arr[i]){
            sum+=arr[i-1]-arr[i];
        }
    }
    cout<<sum<<endl;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}