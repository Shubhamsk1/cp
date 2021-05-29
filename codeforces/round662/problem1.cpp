#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n<=2)
        cout<<2<<endl;
    else if(n==3||n==4)
        cout<<n-1<<endl;
    else{
        cout<<n-2<<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}