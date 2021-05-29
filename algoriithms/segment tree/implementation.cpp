#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl "\n";
#define MAXN 4

int n, t[4*MAXN];
void build(int a[],int v,int tl,int tr){
    if(tl==tr){
        t[v]=a[tl];
    }else{
        int tm=(tl+tr)/2;
        build(a,v*2+1,tl,tm);
        build(a,v*2+2,tm+1,tr);
        t[v]=t[v*2+1]+t[v*2+2];
    }
}

int sum(int v,int tl,int tr,int l,int r){
    if(l>r){
        return 0;
    }
    if(tl==l && tr==r)
        return t[v];
    int tm=(tl+tr)/2;
    return sum(v*2+1,tl,tm,l,min(r,tm))+sum(v*2+2,tm+1,tr,max(l,tm+1),r);
}

void update(int v,int tl,int tr,int pos,int new_val){
    if(tl==tr){
        t[v]=new_val;
    }
    else{
        int tm=(tl+tr)/2;
        if(pos<=tm)
            update(v*2+1,tl,tm,pos,new_val);
        else
            update(v*2+2,tm+1,tr,pos,new_val);
        t[v]=t[v*2+1]+t[v*2+2];
    }
}
int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    build(arr,0,0,n-1);
    for(int i=0;i<4*n;i++){
        cout<<t[i]<<" "; 
    }
    cout<<endl;
}