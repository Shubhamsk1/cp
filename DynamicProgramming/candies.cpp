/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define endl "\n"
#define N 1000000007
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
int c=0;
int dp[101][100001];
int ways(vector<int>& arr, int n,int k){
    if(k==0) return 1;
    if(k<0||n<=0) return 0;
    if(dp[n][k]!=-1) return dp[n][k];
    int w=0;
    for(int i=arr[n-1];i>=0;i--){
        w=(w%N+ways(arr,n-1,k-i)%N)%N;
    }
    return dp[n][k]=w%N;
}



/*Write all function Definition Here */
void solve() { 
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for0(i,n) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<ways(arr,n,k)<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            cout<<dp[i][j]<<"\t";
        }
        cout<<"\n";
    }

}