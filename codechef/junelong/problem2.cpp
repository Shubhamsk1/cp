#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        bool flag=true;
        for(int i=0;i<s.size()-1;i++)
        {
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'==s[i+1]=='x')){
                count+=1;
                flag=true;
                continue;
            }

        }
        cout<<count<<endl;
        
    }
}