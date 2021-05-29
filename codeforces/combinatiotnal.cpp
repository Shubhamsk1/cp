#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int sum=0;
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<n;i++)
    {
        sum=sum+min(abs(s1[i]-s2[i]),min(abs(10-s2[i]+s1[i]),abs(10-s1[i]+s2[i])));
    }
    cout<<sum;
}