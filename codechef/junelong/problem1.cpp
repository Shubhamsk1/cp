#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int total_rev=0;
        int actual_rev=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total_rev+=arr[i];
            if(arr[i]>k)
                arr[i]=k;
            actual_rev+=arr[i];
        }
        cout<<total_rev-actual_rev<<endl;
    }
}