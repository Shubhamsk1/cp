#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    string s;
    cin>>s;
    int n=s.size();
    int ans=0;
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                    ans++;
    cout<<ans;
}