#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int arr[26];
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)  
            arr[int32_t(s[i])-97]++;
        int ans[26];
        memset(ans,0,sizeof(ans));
        int c;
        int sum;
        for(int i=0;i<q;i++)
        {
            cin>>c;
            sum=0;
            for(int i=0;i<26;i++)
            {
                ans[i]=arr[i];
                if(ans[i]<=c)
                    ans[i]=0;
                else
                {
                    ans[i]=ans[i]-c;
                    sum=sum+ans[i];
                }
            }
            cout<<sum<<"\n";
        }   
    }
}