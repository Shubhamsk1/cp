#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int n,t;
    cin>>n>>t;
    string order;
    cin>>order;
    while(t--)
    {
        for(int i=0,j=1;j<n&&i<j;)
        {
            if(order[i]=='B'&&order[j]=='G')
            {
                order[i]='G';
                order[j]='B';
                j+=2;
                i+=2;
                
            }
            else
            {
                j++;
                i++;
            }
        
        }
        
    }
    cout<<order;
}