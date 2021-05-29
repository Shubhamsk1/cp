#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int table[n];
    for(int i=0;i<n;i++)
    {
        table[i]=1;
    }
    int i,j;
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<j;i++)
        {
            if(arr[j]>=arr[i])
            {
                table[j]=max(table[j],table[i]+1);
            }
        }
    }
    int maxim=*max_element(table,table+n);
    cout<<maxim;
}