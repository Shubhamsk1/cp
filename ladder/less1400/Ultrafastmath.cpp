#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    Ios;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            a[i]='1';
        else
            a[i]='0';
        
    }
    cout<<a;
}