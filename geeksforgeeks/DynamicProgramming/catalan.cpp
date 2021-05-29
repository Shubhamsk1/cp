#include<bits/stdc++.h>

#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define Max 100
#define NIL -1 

using namespace std;

int cat[Max];

int catalan(int n){
    if(cat[n]!=-1)
        return cat[n];
    if(n<=1){
        cat[n]=1;
    }
    else{
        int res=0;
        for(int i=0;i<n;i++)
            res+=catalan(i)*catalan(n-i-1);
        cat[n]=res;
    }
    return cat[n];
}

int main(){

    int n;
    cin>>n;
    memset(cat,-1,sizeof(cat));
    catalan(n);
    for(int i=0;i<n;i++){
        cout<<cat[i]<<" ";
    }
    
}