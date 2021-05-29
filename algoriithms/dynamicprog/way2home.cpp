#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int countone(string path)
{
    int count=0;
    for(int i=0;i<path.size();i++)
    {
        if(path[i]=='1')
            count++;
    }
    return count;
}

int32_t main()
{
    IOS;
    int n,d;
    cin>>n>>d;
    string path;
    cin>>path;
    int pos=0;
    int count=0;
    int counts=countone(path);
    int i=0;
    while(i<=counts&&pos<=n-1)
    {
        for(int j=pos+d;j>pos&&pos<=n-1;j--)
        {
            if(path[j]=='1')
            {
                pos=j;
                count++;
                break;
            }
            
        }
        i++;
    }
    if(pos==n-1)
        cout<<count;
    else
    {
        cout<<-1;
    }
    
}