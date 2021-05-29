#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    Ios;
    int n;
    cin>>n;
    if(n>10){
        int num=n-10;
        if(num==10)
            cout<<15;
        else if(num>11){
            cout<<0;
        }
        else{
            cout<<4;
        }
    }
    else
    {
            cout<<0;
    }
    
}