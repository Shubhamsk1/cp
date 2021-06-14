#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr ,int low,int high){
    int pivot=arr[high];
    int i=low-1,j=low;
    while(j<high){
        if(arr[j]<=pivot)
            swap(arr[++i],arr[j]);
        j++;
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(vector<int>& arr,int low,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
        }

}

int main(){
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}