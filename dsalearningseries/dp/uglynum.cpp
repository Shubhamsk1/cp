#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int ugly[ 100005];
void uglunum(int n,int i2,int i3,int i5,int ith)
{
    if(ith==n)
        return;
    else{
        ugly[ith]=min(ugly[i2]*2,min(ugly[i3]*3,ugly[i5]*5));
        if(ugly[ith]==ugly[i2]*2)
            uglunum(n,i2+1,i3,i5,ith+1);
        if(ugly[ith]==ugly[i3]*3)
            uglunum(n,i2,i3+1,i5,ith+1);
        if(ugly[ith]==ugly[i5]*5)
            uglunum(n,i2,i3,i5+1,ith+1);
        
    }

}
int32_t main()
{
    int n;
    cin>>n;
    ugly[0]=1;
    uglunum(n,0,0,0,1);
    cout<<ugly[n-1];
}