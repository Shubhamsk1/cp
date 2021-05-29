#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n,k;
    cin>>n>>k;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int maxs=INT_MIN;
    for(int i=0;i<n;i++){
        maxs=max(maxs,s[i]);
    }
    if(k&1){
        for(int i=0;i<n;i++){
            s[i]=maxs-s[i];
        }
    }
    else{
        int x=0;
        while(x!=2){
            for(int i=0;i<n;i++){
                s[i]=maxs-s[i];
            }
            maxs=INT_MIN;
            for(int i=0;i<n;i++){
                maxs=max(maxs,s[i]);
            }
            x++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" "; 
    }
    cout<<endl;

}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}