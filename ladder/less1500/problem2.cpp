#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 

int32_t main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='4'||s[i]=='7')
            cnt++;
    string lucky=to_string(cnt);
    int flag=0;
    for(int i=0;i<lucky.size();i++)
        if(lucky[i]=='4'||lucky[i]=='7')
            continue;
        else
        {
            flag=1;
            break;
        }
    if(flag==0)
        cout<<"YES";
    else
    {
        cout<<"NO";
    }    
}