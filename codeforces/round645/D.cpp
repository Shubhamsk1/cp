
//Doubt with this question will solve again 
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    int arr[2*n+1]={0};
    int prefix1[2*n+1]={0};
    int prefix2[2*n+2]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[n+i]=arr[i];
    }
    prefix1[0]=prefix2[0]=arr[0]=0;
    for(int i=1;i<=2*n;i++){
        prefix1[i]=prefix1[i-1]+((arr[i]*(arr[i]+1))/2);
        prefix2[i]=prefix2[i-1]+arr[i];
    }
    
    int maxi=0;

    for(int i=2*n;i>=n+1;i--){
        int low=1;
        int high=i;
        int ans=i;
        while(low<=high){
            int mid=(low+high)/2;
            if(prefix2[high]-prefix2[mid]<x){
                ans=mid;
                high=mid-1 ;
            }
            else low= mid+1;
        }
        int temp=prefix2[i]-prefix2[ans-1]-x;
        int sum =prefix1[i]-prefix1[ans-1];
        sum-=((temp*(temp+1))/2); 
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;


}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}