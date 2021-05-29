#include<bits/stdc++.h>
#include<iostream>
using namespace std;
map<int,int> memo;
int ladder(int n,int k)
{
    if(n==0)
        return 1;
    if (n<0)
        return 0;
    if(memo[n]!=0)
        return memo[n];
    int ans=0;
    for(int i=1;i<=k;i++)
    {    ans+=ladder(n-i,k);
         memo[n]=ans;
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int ways=ladder(n,k);
    cout<<ways;
}