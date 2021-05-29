#include<bits/stdc++.h>
using namespace std;
struct energy{
    int s;
    int e;
    int l;
};
bool mycmp(energy a,energy b)
{
    return a.l>b.l;
}
int maxenergy(int time ,int i)
{
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        energy stones[n];
        for(int i=0;i<n;i++)
        {
            cin>>stones[i].s>>stones[i].e>>stones[i].l;
        }
        sort(stones,stones+n,mycmp);
           

    }
}