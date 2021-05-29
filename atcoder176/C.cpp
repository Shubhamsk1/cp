#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
  int n;
  cin>>n;
  int arr[n];
  int maxs=INT_MIN;
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  	if(arr[i]>=maxs){
    	maxs=arr[i]; 
    }
    sum+=maxs-arr[i];
  }
   cout<<sum<<endl;
	
}