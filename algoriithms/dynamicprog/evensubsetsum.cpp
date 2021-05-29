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
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int i,count=0;
        int index,c=0;
        for(i=1;i<=n;i++)
        {
            if(arr[i]%2==0)
            {
                c=1;
                break;
            }    
            else 
            {
                count++;
            }
            if(count ==1)
                index=i;
            if(count==2)
                break;
            
        }
        if(c==1)
        {
            cout<<1<<"\n";
            cout<<i<<"\n";
        }
        
        else if(count==2)
        {
            cout<<count<<"\n";
            cout<<index<<" "<<i<<"\n";
        }
        else{
            cout<<"-1\n";
        }
            
    }
}