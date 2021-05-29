#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n;
    cin>>n;
    int boy[n];
    for(int i=0;i<n;i++)   cin>>boy[i];
    int m;
    cin>>m;
    int girl[m];
    for(int i=0;i<m;i++)   cin>>girl[i];

    int pairs=0;
    sort(boy,boy+n);
    sort(girl,girl+m);
    int i=0,j=0;
    while(i<n && j<m){
        if(abs(boy[i]-girl[j])<=1){
            i++;
            j--;
            pairs++;
        }
        else if(boy[i]>girl[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<pairs<<endl;
    
}

int32_t main(){
    IOS;
    solve();

}    