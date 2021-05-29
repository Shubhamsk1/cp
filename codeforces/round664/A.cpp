#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define int long long 
void solve(){
    int r,g,b,w;
    cin>>r>>g>>b>>w;
 
    if((r!=0&&g!=0&&b!=0)||(r==0&&g==0&&b==0)){
        cout<<"YES"<<endl;
    }
    else if((r==0&&g==0)||(g==0&&b==0)||(b==0&&r==0)||(r==0&&w==0)||(g==0&&w==0)||(b==0&&w==0)) cout<<"YES"<<endl;
    else{
        int sum=r+g+b+w;
        if(sum%2==0&&r==0){
            if((g%2==0&&b%2==0&&w%2==0)||(g%2!=0&&b%2!=0)||(b%2!=0&&w%2!=0)||(g%2!=0&&w%2!=0)){
                cout<<"YES"<<endl;
            }
        }
        else if(sum%2==0&&g==0){
            if((r%2==0&&b%2==0&&w%2==0)||(r%2!=0&&b%2!=0)||(b%2!=0&&w%2!=0)||(r%2!=0&&w%2!=0)){
                cout<<"YES"<<endl;
            }
        }
        else if(sum%2==0&&b==0){
            if((r%2==0&&g%2==0&&w%2==0)||(r%2!=0&&g%2!=0)||(g%2!=0&&w%2!=0)||(r%2!=0&&w%2!=0)){
                cout<<"YES"<<endl;
            }
        }
    }

}
int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}