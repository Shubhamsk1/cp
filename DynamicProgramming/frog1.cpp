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

/*is Single Test case?*/
while(t--)
{ 
solve(); 
cout<<"\n";
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
int dp[100000+1];
/*Main function Ends */
int cost(vector<int>& arr,int n){
    if(n==1||n==0) return dp[n]=0;
    if(n==2) return dp[2] =abs(arr[1]-arr[0]);
    if(dp[n]!=-1) return dp[n];
    return dp[n]=min(abs(arr[n-1]-arr[n-2])+cost(arr,n-1),
                abs(arr[n-1]-arr[n-3])+cost(arr,n-2));

}


/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    vector<int>arr(n);
    for0(i,n) cin>>arr[i];
    int tot_cost=cost(arr,n);
    cout<<tot_cost;

}