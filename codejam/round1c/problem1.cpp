#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int moves_req(int x,int y)
{
    return abs(x)+abs(y);
}
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string m;
        cin>>m;
        int moveno=1;
        int c;
        for(int i=0;i<m.size()+1;i++)
        {
            c=0;
            if(m[i]=='S')
                y=y-1;
            if(m[i]=='N')
                y=y+1;
            if(m[i]=='E')
                x=x+1;
            if(m[i]=='W')
                x=x-1;
            if(moveno==moves_req(x,y))
            {    
                c=1;
                break;
            }
            moveno++;  
           
        }
        if(c==0)
            cout<<"IMPOSSIBLE"<<"\n";
        else{
            cout<<moveno<<"\n";
        }
    }
}