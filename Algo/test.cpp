#include<iostream>
#include<vector>
using namespace std;
int modified_binary_search(vector<int>& arr,int low,int high){
    int mid=-1;
    while(low<high){
            mid=low+( high-low)/2;
        if(arr[mid]==0){
            if(arr[mid+1]==1)
                return mid+1;
            low=mid+1;
        }
        else {
            if(arr[mid-1]==0)
                return mid;
            high=mid-1;
        }
    } 
    return high+1;
    
}
void merge(vector<int> & arr,int low,int mid,int high){
    int l1=mid-low +1;
    int l2=high-mid;
    int x1=modified_binary_search(arr,low,mid);
    int x2=modified_binary_search(arr,mid+1,high);
    int lenzero=x1-low+x2-mid-1;
    cout<<lenzero<<"\n";
}
void sort(vector<int>& arr,int low,int high){
    if(low<high){
        int mid =low+(high-low)/2;
        sort(arr,low,mid);
        sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    } 
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,0,n-1);
    for(auto i:arr) cout<<i<<" ";
}