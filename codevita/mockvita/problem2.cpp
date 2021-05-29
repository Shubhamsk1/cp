#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    IOS;
    int n;
    cin>>n;
    string s[n];
    string ans[n];
    int largest;
    int smallest;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        int large=0;
        int small=10;
        for(int j=0;j<3;j++){
            if(s[i][j]>large)
                large=(int)s[i][j];
            if(s[i][j]<small)
                small=(int)s[i][j];
            int anss=large*11+small*7;
            ans[i]=to_string(anss);
        }
    }
    for(int i=0;i<n;i++){
        if()
        
    }
}