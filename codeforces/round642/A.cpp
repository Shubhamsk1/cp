#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
using namespace std;

ll findlarge(string x){
    char large=x[0]; 
    for(int i=1;i<x.size();i++){
        if(x[i]>large)
            large=x[i];
    }
    int num=(int)large-48;   
    return num;
}
ll findmin(string x){
    char small=x[0]; 
    for(int i=1;i<x.size();i++){
        if(x[i]<small)
            small=x[i];
    }
    int num=(int)small-48;   
    return num;
}
void solve(){
    ll a,k;
    cin>>a>>k;
    
    for(int i=1;i<=k-1;i++){
        string s = to_string(a);
        int x=findmin(s);
        int y=findlarge(s);
        if(x==0||y==0)
            break;
        a=a+x*y;
    }
    cout<<a<<endl;
}
int main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}