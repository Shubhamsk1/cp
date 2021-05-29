#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count =0;
    map<int,int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.insert(pair<int,int>(arr[i],0));
    }
    for(int i=0;i<n;i++){
        v[arr[i]]++;
    }
    int maxs=0;
    for(auto i=v.begin();i!=v.end();i++){
        maxs=max(maxs,i->second);
    }
    if(maxs==n){
        cout<<n<<endl;
    }
    else{
        cout<<1<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}