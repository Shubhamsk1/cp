#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i;
    int count=1;
    int max=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {    
            count++;
        }
        else
        {
            if(count>max)
                max=count;
            
            count=1;
        }
    }
    if(count>max)
        max=count;
    cout<<max;
}