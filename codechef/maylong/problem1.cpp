#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int arr[9];
int diff[9];
int countlargest(int j)
{
    int count=1,max=1;
    for(int i=0;i<j;i++)
    {   
        if(diff[i]<=2)
            count++;
        else{
            if(diff[i]>2)
            {
                if(count>max)
                    max=count;
            count=1;
            }
        }
    }
    if(count>max)
        max=count;
    return max;
}
int countsmallest(int j)
{
    int count=1,max=j+1;
    for(int i=0;i<j;i++)
    {   
        if(diff[i]<=2)
            count++;
        else if(diff[i]>2)
        {
            if(count<max)
                max=count;
            count=1;
        }
    }
    if(count<max)
        max=count;
    return max;
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
        {
            cin>>arr[i];
        }
        int j=0;
        for(int i=2;i<=n;i++)
        {
            diff[j]=arr[i]-arr[i-1];
            j++;
        }
        int small=countsmallest(j);
        int large=countlargest(j);
        cout<<small<<" "<<large<<"\n";
    }
}