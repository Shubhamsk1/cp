#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<< x<<" "<<y<<endl;
    for(int i=1;i<=n;i++){
        if(i!=x){
            cout<<i<<" "<<y<<endl;
        }
    }
    int dir=0;
    for(int i=1;i<=m;i++){
        if(i==y)
            continue;
        if(dir==0){
            cout<<n<<" "<<i<<endl;
            for(int j=n-1;j>=1;j--){
                cout<<j<<" "<<i<<endl;
            }
            dir=1;
        }
        else{
            cout<<1<<" "<<i<<endl;
            for(int j=2;j<=n;j++){
                cout<<j<<" "<<i<<endl;
            }
            dir=0;
        }
    }

}
int main(){
    solve();
    
}