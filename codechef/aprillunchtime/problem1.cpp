#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define endl "\n"
struct problem{
    int ival;
    int itype;
};
bool mycmp(problem a,problem b)
{
    return a.itype<=b.itype;
}

bool mycmp2(problem a,problem b)
{
    return a.ival<=b.ival;
}


int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min1=101,min2=101;
        int k;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k==0)
            {
                min1=min(arr[i],min1);
            }
            else
            {
                min2=min(arr[i],min2);
            }
        }
        
        if((s+min1+min2)<=100)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}