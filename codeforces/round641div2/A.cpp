#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int findsmall(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
void solve(){
    int n,k;
    cin>>n>>k;
    n=n+findsmall(n);
    n=n+(k-1)*2;
    cout<<n<<endl;

}
int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}