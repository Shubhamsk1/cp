#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(i!=n-1)
            sum*=2;
    }
    cout<<sum<<endl;
    int low=1,high=n,mid,k;
    while(low<high){
        mid=low+(high-low)/2;
        if(mid*mid*mid==sum){
            k=mid;
            break;
        }
        if(mid*mid*mid<sum) {
            low=mid+1;
            k=mid;
        }
        else high=mid-1;
    }
    cout<<k;
    


}