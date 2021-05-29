#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int digitsSum(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}


int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int powera=0,powerb=0;
        int pointsa=0,pointsb=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            powera=digitsSum(a);
            powerb=digitsSum(b);
            if(powera==powerb){
                pointsa++;
                pointsb++;
            }
            else if(powera>powerb){
                pointsa++;
            }
            else{
                pointsb++;
            }
        }
        if(pointsa==pointsb){
            cout<<2<<" "<<pointsa<<"\n";
        }
        else if(pointsb>pointsa){
            cout<<1<<" "<<pointsb<<"\n";
        }
        else{
            cout<<0<<" "<<pointsa<<"\n";
        }
    }
}
