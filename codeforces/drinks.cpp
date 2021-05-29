#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {    
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout.precision(14); 
    cout<<sum/double(n);
}