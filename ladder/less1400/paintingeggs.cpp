#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    Ios;
    int n;
    cin>>n;
    vector<int>a,g;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        cin>>x;
        g.push_back(x);
    }
    string ans="";
    int sa=0,sg=0;
    for(int i=0;i<n;i++){
        if(abs(sa+a[i]-sg)<=500){
            sa+=a[i];
            ans+="A";
        }
        else if(abs(sg+g[i]-sa)<=500){
            sg+=g[i];
            ans+="G";
        }
    }
    if(abs(sa-sg)<=500)
        cout<<ans;
    else
        cout<<"-1";
}