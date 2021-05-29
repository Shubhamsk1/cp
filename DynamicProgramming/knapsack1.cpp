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
/*Main function Ends */
int dp[101][100001];
int sums(vector<int>& weight,vector<int>& value,int n,int w){
    if(n<=0||w<=0) return dp[n][w]=0;
    if(dp[n][w]!=-1) return dp[n][w];
    if(weight[n-1]>w) return dp[n][w]=sums(weight,value,n-1,w);
    return dp[n][w]=max(value[n-1]+sums(weight,value,n-1,w-weight[n-1]),sums(weight,value,n-1,w));
}


/*Write all function Definition Here */
void solve() { 
    int n,w;
    cin>>n>>w;
    memset(dp,-1,sizeof(dp));
    vector<int> weight(n),value(n);
    for0(i,n) cin>>weight[i]>>value[i];
    cout<<sums(weight,value,n,w);

}