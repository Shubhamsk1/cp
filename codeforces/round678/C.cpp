/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define mod 1000000000+7
#define endl "\n"
using namespace std;
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

/*is Single Test case?*/
while(t--)
{ 
solve(); 
cout<<"\n";
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */

int factorial(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

/*Write all function Definition Here */
void solve() { 
    int n,x,pos;
    cin>>n>>x>>pos;
    int mid=n/2;
    int ans;
    if(pos<=mid){
        ans=(factorial(n-1)%mod - (((x-1)%mod)*(abs((mid-x-1))%mod)%mod))%mod;
    }
    else{
        ans=(factorial(n-1)%mod-(((n-x)%mod)*(abs((mid-x-1))%mod)%mod))%mod;
    }
    cout<<ans;
    

}