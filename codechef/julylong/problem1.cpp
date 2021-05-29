#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=abs(arr[i+1]-arr[i])-1;
        }
        cout<<sum<<"\n";
    }
}