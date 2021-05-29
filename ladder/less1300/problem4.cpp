#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    string value;
    cin>>value;
    for(int i=0;i<value.size();)
    {
        if(value[i]=='.')
        {
            cout<<0;
            i++;
        }
        if(value[i]=='-'&&value[i+1]=='.')
        {    
            cout<<1;
            i+=2;
        }
        if(value[i]=='-'&&value[i+1]=='-')
        {
            cout<<2;
            i+=2;
        }
    }
}