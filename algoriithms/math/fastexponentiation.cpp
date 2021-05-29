//This program is for finding fast exponentiation
//this can be computed using reccursion with o(log n) times
// and can be done with bitmasking with o(logn) time and o(1) space

#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MOD (1000000000+7)
using namespace std;
ll fastmodexp(ll a,ll b)
{
    ll result=1;
    while(b>0)
    {
        if(b&1)
        {
            result=(result*a)%MOD;
        }
        a=(a*a)%MOD;
        b=b>>1;
    }
    return result;
}
int main()
{
    cout<<fastmodexp(5,2);
}