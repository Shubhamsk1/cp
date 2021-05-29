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

int dp[1001][1001];
/*Main function Ends */
int paths(vector<string>& arr, int n,int w){
    if(n<=0||w<=0) return 0;
    if(dp[n][w]!=-1) return dp[n][w]%N;
    if(arr[n-1][w-1]=='#') return dp[n][w]=0;
    if(n==1&&w==1) return dp[n][w]=1;
    return dp[n][w]=(paths(arr,n-1,w)%N+paths(arr,n,w-1)%N)%N;
}


/*Write all function Definition Here */
void solve() { 
    int n,w;
    cin>>n>>w;
    vector<string> arr(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<paths(arr,n,w)%N;   

}