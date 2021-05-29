#include<bits/stdc++.h>
using namespace std;
int table[100][100]={0}; 

int countsubset(int arr[],int n,int sum)
{
    if(n==0&&sum==0)
    {    
        return 1;
    }
    else if(n==0)
    {    
        return 0;
    }
    else if(sum==0)
    {   
        return 1; 
    }
    if(table[n][sum]!=-1)
        return table[n][sum];
    else if(arr[n-1]<=sum)
    {
        table[n][sum]=countsubset(arr,n-1,sum)+countsubset(arr,n-1,sum-arr[n-1]);
        return table[n][sum];
    }
    else{
        table[n][sum]=countsubset(arr,n-1,sum);
        return table[n][sum];
    }

        
}

int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    memset(table,-1,sizeof(table));
    int ans=countsubset(arr,n,sum);
    cout<<ans;

}