#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long 

int n,q;

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int f=0;
        int count=0;
        for(int i=1;i<=q;i++)
        {
           int newf,newd;
           cin>>newf>>newd;
           count=count+abs(newf-f)+abs(newd-newf);
           f=newd;
        }
        cout<<count<<endl;
        
    }
}