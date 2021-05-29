#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//complexity O(5)
int hitlottery(int n)
{
    int choice[5]={100,20,10,5,1};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        if(n>=choice[i])
        {
            ans+=(n/choice[i]);
            n=n-(n/choice[i])*choice[i];
        }
        else if(n==0)
        {
            break;
        }
    }
    return ans;
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans=hitlottery(n);
    cout<<ans;

}