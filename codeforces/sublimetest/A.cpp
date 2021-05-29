#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    int t ;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int a=y*k+k-1;
        int b=x-1;
        int ans=(a+b-1)/b;
        cout<<ans+k<<"\n";
    }
}