#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[n]={0};
    char lastVisited;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0 && s[i]=='0'){
            count++;
            lastVisited='0';
            arr[i]=count;
        }else if(arr[i]==0 && s[i]=='1'){
            count++;
            lastVisited='1';
            arr[i]=count;
        }else{
            continue;
        }
        
        for(int j=i+1;j<n;j++){
            if(arr[j]==0&&s[j]!=lastVisited){
                lastVisited=s[j];
                arr[j]=count;
            }
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}