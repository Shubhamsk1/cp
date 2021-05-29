#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main()
{
    int best=0;
    int n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++)
                sum+=arr[k];
            best=max(sum,best);
        }
    cout<<best;

}