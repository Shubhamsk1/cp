#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>c;

void codefor1(int n){

    if(n<=1){
        c.push_back(n);
        return;
    }
    else{
        codefor1(floor(n/2));
        c.push_back(n%2);
        codefor1(floor(n/2));
    }
}

int32_t main(){

    int n,l,h;
    cin>>n>>l>>h;
    codefor1(n);
    int sum=0;
    for(int i=l;i<=h;i++)
        if(c[i]==1){
            sum+=c[i];
        }
    cout<<sum;
}