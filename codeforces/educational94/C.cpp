#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

void solve(){
    string s;
    cin>>s;
    int x;
    cin>>x;
    string ans ="";
    for(int i=0;i<s.size();i++){
        if(i+x>0 && s[i+x]=='1'){
            ans.push_back('1');
        }
        else if(i-x<=s.size()-1 && s[i-x]=='1'){
            ans.push_back('1');
        }
        else if(!(i-x<=s.size()-1 && s[i-x]=='1')&&!(i-x<=s.size()-1 && s[i-x]=='1')){
            ans.push_back('0');
        }
       
    }

    int flag=true;
    for(int i=0;i<s.size()-1;i++){
        if(ans[i]!=ans[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
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