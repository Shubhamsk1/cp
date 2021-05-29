#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int depth[n];
        for(int i=0;i<n;i++){
            cin>>depth[i];
        }
        int flag=1;
        int mini=-k;
        int maxi=k;
        for(int i=0;i<n;i++){
            if(depth[i]>l){
                flag=0;
                break;
            }
            maxi=min(l-depth[i],k);
            if (maxi==k){
                mini=-k;
            }
            else{
                mini=max(mini+1,-maxi);
            }
            if(mini>maxi){
                flag=0;
                break;
            }
        }
        string s=flag==1?"YES":"NO";        
        cout<<s<<endl;   
    }
}