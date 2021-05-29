#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        IOS;
        int a,b,n;
        int count=0;
        cin>>a>>b>>n;
        while(a<=n&&b<=n){
            if(a<b){
                a=a+b;
            }
            else{
                b=a+b;
            }
            count++;
        }
        cout<<count<<"\n";
    }
}