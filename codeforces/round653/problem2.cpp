#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        int total=0;
        cin>>n;
        while(n!=1){
            if(n%6==0){
                n=n/6;
                total++;
            }
            else if(n%3==0){
                n=n*2;
                total++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<-1<<"\n";
        else
        {
            cout<<total<<"\n";
        }
    }

}