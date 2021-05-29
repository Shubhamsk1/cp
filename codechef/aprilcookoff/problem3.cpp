#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long 

string s,r;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int k,l=0;
        cin>>s>>r;
        vector<int> bad;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=r[i])
            {
                bad.push_back(i);
                l++;
            }
        }
        k=l;
        vector<int> lengths;
        for(int i=1;i<bad.size();i++)
        {
            lengths.push_back(bad[i]-bad[i-1]-1);
        }
        int x=l;
        sort(lengths.begin(),lengths.end());
        int i=0;
        int ans=l*l;
        k=x;
        for(k=x-1;k>=1;k--)
        {
            l=l+lengths[i];
            ans=min(ans,k*l);
            i++;
        }
        cout<<ans<<endl;
    }
}