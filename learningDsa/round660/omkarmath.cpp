#include<bits/stdc++.h>
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return -1;
}
 
int main(){
    Ios;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=prime(n);
        if(ans!=-1){
            cout<<n/ans<<" "<<n-(n/ans)<<endl;
        }else{
            cout<<1<<" "<<n-1<<endl;
        }
    }
}