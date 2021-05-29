#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    Ios;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        string s(200,'a');
        cout<<s<<endl;
        for(int i=1;i<=n;i++){
            int k;
            cin>>k;
            s[k]=s[k]=='a'?'b':'a';
            cout<<s<<endl;
        }   
        
    }
}
