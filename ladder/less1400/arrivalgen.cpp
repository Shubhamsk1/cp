#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    int mini=0,maxi=0;
    int mine=101,maxe=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max){
            maxi=i;
            max=arr[i];
        }
        if(arr[i]<=min){
            mini=i;
            min=arr[i];
        }
    }
    if(maxi>mini)
        cout<<maxi+n-1-mini-1;
    else
        cout<<maxi+n-1-mini;
    

}