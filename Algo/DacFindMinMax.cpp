#include<bits/stdc++.h>
typedef struct Pair
{
    int maxs,mins;
} Pair;
using namespace std;
Pair DacFindMinMax(vector<int>& arr,int low,int high){
    if(low>high)
        return {INT_MIN,INT_MAX};
    if(low==high)
        return {arr[low],arr[low]};
    int mid=low+(high-low)/2;
    if(low<high){
        Pair temp1=DacFindMinMax(arr,low,mid);
        Pair temp2=DacFindMinMax(arr,mid+1,high);
        return {max(temp1.maxs,temp2.maxs),min(temp1.mins,temp2.mins)};
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    Pair ans=DacFindMinMax(arr,0,n-1);
    cout<<ans.mins<<" "<<ans.maxs;
}