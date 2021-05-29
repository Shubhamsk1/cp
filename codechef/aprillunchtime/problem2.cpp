#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"
struct cord{
    int x;
    int y;
};
bool isinside(cord a,int l, int r)
{
    double mslope=1.0;
    double slope1=abs(a.y/float(a.x-l));
    double slope2=abs(a.y/float(a.x-r));
    return (slope1<=mslope&&slope2<=(mslope)&&a.x>=l&&a.x<=r);
}
int32_t main()
{
    int t;
    cin>>t;;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        cord arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].x>>arr[i].y;
        }
        int l,r;
        vector<int> count;
        count.clear();
        for(int i=0;i<q;i++)
        {
            cin>>l>>r;
            cord cords;
            int p=(l+r)/2.0;
            cords.x=p;
            cords.y=p-l;
            
            int c=0;
            for(int j=0;j<n;j++)
            {
                bool ans=isinside(arr[j],l,r);
                if(ans)
                {
                    c++;
                }
            }
            count.push_back(c);
        }
        for(auto i=count.begin();i!=count.end();i++)
        {
            cout<<*i<<" ";
        }
    }
}