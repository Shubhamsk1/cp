#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int freq[n+1]={0};
        int times[n+1]={0};
        for(int i=1;i<=n;i++)
        {   
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
            freq[arr[i]]++;
        for(int i=1 ;i<=n;i++)
            times[freq[i]]++;
        int ans1=1;
        for(int i=1;i<=n;i++)
        {
            if(times[i]>1)
            {
                ans1=0;
                break;
            }
        }
        bool ans2=1;
        int visit[n+1]={0};
        visit[arr[1]]=1;
        for(int i=2;i<=n;i++)
        {
            if(arr[i]==arr[i-1])
            {    
                continue;
            }
            if(visit[arr[i]]==1)
            {
                ans2=0;
                break;
            }
            else
            {
                visit[arr[i]]=1;
            }
        }
        if(ans1==1 && ans2==1)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}