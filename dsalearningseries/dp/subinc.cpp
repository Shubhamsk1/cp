#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int arr[100001];
int incsub(int i,int j)
{
    int count=0;
    for(int x=i;x<=j;x++)
    {
        for(int y=i;y<=j;y++)
        {
            if(arr[y+1]>=arr[y])
                count++;
            
        }
    }
}
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        cout<<incsub(1,n);
    }
}