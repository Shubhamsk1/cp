#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int lowerlimcalc;
int c;
void codefor1(int n,int l,int h){    
    if(lowerlimcalc>=l && lowerlimcalc<=h && n<=1){
        lowerlimcalc++;
        c++;
        return;
    }
    if(n<=1){
        lowerlimcalc++;
        return;
    }
    else{
        codefor1(floor(n/2),l,h);
        if(n%2==1 && lowerlimcalc>=l && lowerlimcalc<=h ){
            c++;
        }
        lowerlimcalc++;
        codefor1(floor(n/2),l,h);
    }
}

int32_t main(){

    int n,l,h;
    cin>>n>>l>>h;
    lowerlimcalc=0;
    c=0;
    codefor1(n,l-1,h-1);
    cout<<c;
}