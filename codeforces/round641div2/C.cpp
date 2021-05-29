#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
using namespace std;
ll gcd(ll a, ll b){
    if(b==0)  return a;
    else return gcd(b,a%b);
}

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int suff[n];
    suff[n-1]=arr[n-1];
    for(ll i=n-2;i>=0;i--){
        suff[i]=gcd(arr[i],suff[i+1]);
    }
    ll gcds[n-1];
    for(ll i=0;i<n-1;i++){
        gcds[i]=(arr[i]*suff[i+1])/gcd(arr[i],suff[i+1]);
    }

    ll finalGcd=gcds[0];
    for(int i=1;i<n-1;i++){
        finalGcd=gcd(finalGcd,gcds[i]);
    }
    cout<<finalGcd<<endl;
}
int main(){
    IOS;
    solve();
}