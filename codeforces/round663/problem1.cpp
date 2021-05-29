#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int firstnum=ceil(float(n/2.0));
    cout<<firstnum<<" ";    
    int j=1;

    if(n%2!=0){
        for(int i=1;i<=(n-1)/2;i++){
            cout<<firstnum-j<<" "<<firstnum+j<<" ";
            j++;
        }
    }
    else{
         for(int i=1;i<=ceil((n-1)/2.0);i++){
            if(firstnum-j!=0)
                cout<<firstnum-j<<" ";
            cout<<firstnum+j<<" ";
            j++;
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    
    return 0;
}