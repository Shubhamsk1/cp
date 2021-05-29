#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    IOS;
    int n;
    string b,g;
    cin>>n;
    cin>>b>>g;
    int total=0;
    for(int i=0;i<n;i++){
        if(b[i]==g[0]){
            total++;
        }
        else{
            int j=0;
            while(b[i]!=g[0]&&j!=n){
                char temp=g[0];
                g.erase(g.begin());
                g+=temp;
                j++;
            }
            if(b[i]!=g[0]){
                break;
            }else{
                total++;
                g.erase(g.begin());
            }
        }
        
    }
    cout<<n-total;
    
}

