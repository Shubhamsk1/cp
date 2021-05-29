#include<bits/stdc++.h>
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD (1000000000+7)

int fxp(int a,int b)
{
    int result=1;
    while(b>0)
    {
        if(b&1)
        {
            result+= result*a%MOD
        }
        a=(a*a)%MOD;
        b>>1;
    }
    return result;
}

using namespace std;

int h,n;

struct tower{
    int t,x,a;
    int index;
};
bool mycmp(tower a,tower b)
{
    return a.x<b.x;
}
int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>h>>n;
        tower tow[n]; 
        for(int i=0;i<n;i++)
        {
            cin>>tow[i].t>>tow[i].x>>tow[i].a;
            tow[i].index=i;
        }
        sort(tow,tow+n,mycmp);
        int ans[n]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int h=tow[j].a-tow[i].a;
                int w=tow[j].x-tow[i].x;

                bool posfrombelow=0;
                if(!)
            }
        }
    }
}