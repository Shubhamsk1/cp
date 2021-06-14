#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,int low,int mid,int high){
    int l1=mid-low+1;
    int l2=high-mid;
    vector<int> left(l1),right(l2);
    for(int i=0;i<l1;i++) left[i]=arr[low+i];
    for(int j=0;j<l2;j++) right[j]=arr[mid+1+j];
    int i=0,j=0,k=0;
    while(i<l1&&j<l2){
        if(left[i]<right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<l1) arr[k++]=left[i++];
    while(j<l2) arr[k++]=right[j++];
    
}
void mergeSort(vector<int>& arr,int low,int high){
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(auto i:arr) cout<<i<<" ";

}