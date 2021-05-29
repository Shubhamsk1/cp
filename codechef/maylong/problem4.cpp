#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int count_bits(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/2;
        count++;
    }
    return count;
}
int find_num(int n)
{
    int ans=pow(2,n)-1;
    return ans;
}
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,l,r;
        int k;
        cin>>x>>y>>l>>r;
        k=x|y;
        cout<<k<<"\n";
    }
}