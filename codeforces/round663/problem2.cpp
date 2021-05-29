#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;  
    char arr[x+1][y+1];
    int rcount=0;
    int dcount=0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cin>>arr[i][j];
            if(arr[i][y]=='R')  rcount++;
            if(arr[x][j]=='D')  dcount ++;
        }
    }
    cout<<rcount+dcount<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    
    return 0;
}