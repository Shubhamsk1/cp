/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define endl "\n"
#define N 10000007
using namespace std;
int fme(int a,int b){
int res=1;
while(b>0){
if(b&1){
res=(res*a)%N;
}
a=(a*a)%N;
b=b>>1;
}
return res;
}
/*Declare function prototypes here*/
void solve();



/*Declare Global variables here*/



/* Main function starts from here */
int32_t main() { 
/*Fast IO*/ 
ios_base::sync_with_stdio(false);cin.tie(NULL);

/*Input-output file creation*/
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout);
#endif

int t=1; 

/*is Single Test case?*/cin>>t;
while(t--)
{ 
solve(); 
cout<<"\n";
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */



/*Write all function Definition Here */
void solve() { 
    int n, a,b,h;
    string s;
    cin>>n>>a>>b>>h;
    cin>>s;
    int c0=0;
    int c1=0;
    for0(i,n){
        if(s[i]=='0')c0++;
        if(s[i]=='1')c1++;
    }
    int x=c0-c1;
    if(a<b){
        cout<<min(c0*a+c1*b,(c1+c0)*a+h*abs(c1));
    }
    else if(a>b){
        cout<<min(c0*a+c1*b,(c0+c1)*b+h*c0);

    }   
    else{
        cout<<c0*a+c1*b;
    }
    
    
}