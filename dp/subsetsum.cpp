#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool subset(int arr[],int n, int m)
{
    if(n==0)
        return true;
    if(m==0)
        return false;
    else if(arr[m-1]<=n)
    {
        
        bool ans =subset(arr,n-arr[m-1],m-1)||subset(arr,n,m-1);
        if(ans)
            cout<<arr[m-1]<<" ";
        return ans;
    }
    else{
        bool ans =subset(arr,n,m-1);
        if(ans)
            cout<<arr[m-1]<<" ";
            return ans;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    bool ans = subset(arr,n,m);
    if(ans)
        cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
}