#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
void solve(){
   int n,x;
   cin>>n>>x;
   int temp;
   int even=0,odd=0;
   for(int i=0;i<n;i++){
       cin>>temp;
       if(temp&1) odd++;
       else even++;
   }   
   int nums=min(odd,x);
   int flag=0;
   for(int i=1;i<=nums;i+=2){
       if(even>=x-i){
           flag=1;
           break;
       }
   }
   if(flag==1)  cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
  

}

int32_t main(){
    IOS;
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
} 