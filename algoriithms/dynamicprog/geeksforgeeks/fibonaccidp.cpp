#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

map<int,int> memo;

int fib(int n)
{
    if(memo.find(n)!=memo.end())
    {
        return memo[n];
    }
    if(n<=2)
    {
        memo[n]=1;
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int32_t main()
{
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans;
}