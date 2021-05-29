#include<bits/stdc++.h>
using namespace std;
string temp;
void reverseString(string s, int n,string &temp){
    if(n==0){
        return; 
    }
    temp+=s[n-1];
    reverseString(s,n-1,temp);
}
void solve(){
    string s;
    string temp="";
    cin>>s;
    reverseString(s,s.size(),temp);
    if(temp==s) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int32_t main(){
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout); 
#endif 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}