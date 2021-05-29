#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct val{
    int l,r ,id;
} ;
bool mycomp(val x,val y)
{
    if (x.r==y.r)
        return x.l<y.l;
    return x.r<y.r;
}
val arr[1005];
int n,t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cin>>t;
    int x=1;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].l>>arr[i].r;
            arr[i].id=i;
        }
        sort(arr,arr+n,mycomp);
        int c=0;
        char ans[n];
        int cend,jend;
        cend=-1;
        jend=-1;
        bool valid=true;
        for(int i=0;i<n;i++)
        {
            if (arr[i].l>=cend)
            {
                cend=arr[i].r;
                ans[arr[i].id]='C';
            }
              else if(arr[i].l>=jend)
            {
                jend=arr[i].r;
                ans[arr[i].id]='J';
            }
            else{
                valid=false;
                break;
            }
        }
        cout<<"Case #"<<x<<": "; 
        if(valid)
        {
            for(int i=0;i<n;i++)
            {
                cout<<ans[i];
            }
        }    
       else{
           cout<<"IMPOSSIBLE";
       }
       cout<<"\n";
       x++;
    }
} 