#include<bits/stdc++.h>

#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define Max 100
#define NIL -1 
using namespace std;
int lookup[Max];

void initialize(){
    for(int i=0;i<Max;i++)
        lookup[i]=NIL;
}
//memoization approach
int fib(int n){
    if(lookup[n]==NIL){
        if(n==0||n==1)
            lookup[n]=n;
        else
            lookup[n]=fib(n-1)+fib(n-2);
    }
    return lookup[n];
}
//tabulation approach
int fibo(int n){
    int f[n+1];
    int i;
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }return f[n];
}

int main(){
    int n;
    cin>>n;
    initialize();
    cout<<"Fibonacci number is :"<<fibo(n);
    return 0;
    
}