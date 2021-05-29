#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int arr[100001];
int genApproach(int n){
    int max=int32_t(INT32_MIN);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j)
                continue;
            if(arr[j]-arr[i]>max){
                max=arr[j]-arr[i];
            }
        }
    }
    return max;
}
int maxInSubArray(int n){
    int maxsum=int32_t(INT32_MIN);
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum>=maxsum)
                maxsum=sum;
        }
    }
    return maxsum;
}
int32_t main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=maxInSubArray(n);
    cout<<ans;


}