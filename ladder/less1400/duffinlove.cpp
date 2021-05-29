#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    Ios;
    int n;
    cin>>n;
    int c=0;
    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
        {
            for(int j=1;j*j<i;j++)
            {
                if(i%(j*j)==0){
                    c=1;
                    break;
                
            }
            if(c==1)
                break;
        }

    }
}