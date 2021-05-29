#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 

int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(5-arr[i]>=k)
            count++;
    }
    int ans=count/3;
    cout<<ans;

}