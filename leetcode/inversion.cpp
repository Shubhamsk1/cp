#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int temp[],int left ,int mid,int right){
    int i,j,k;
    int inv_count=0;
    i=left;
    j=mid;
    k=right;
    while(i<=mid-1&&j<=right){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
            
            inv_count+=(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return inv_count;
    
}
int _mergeSort(int arr[],int temp[],int left,int right){
    int mid,inv_count=0;
 
    if(left<right){
         mid=(left+right)/2;
        //find the inversion count in the left part
        //find the inversion count in the right part 
        //and then count the inversion while merging two parts
        inv_count+=_mergeSort(arr,temp,left,mid);
        inv_count+=_mergeSort(arr,temp,mid+1,right);
        
        
        inv_count+= merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}


int merge_sort(int arr[],int arraySize){
    int temp[arraySize];
    return _mergeSort(arr,temp,0,arraySize-1);
}
int main()
{
	//code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<merge_sort(arr,n)<<endl;
        
    }
	return 0;
}