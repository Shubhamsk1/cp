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
int dp[100001];
/*Main function Ends */
int findMaxPath(map<int,vector<int>>& p,int n){
    if(p[n].empty()) return dp[n]=0;
    if(dp[n]!=-1) return dp[n];
    int maxs=INT_MIN;
    for(int i=0;i<p[n].size();i++){
        maxs=max(maxs,1+findMaxPath(p,p[n][i]));
    }
    return dp[n]=maxs;
}



/*Write all function Definition Here */
void solve() { 
    int n,m;
    cin>>n>>m;
    map<int,vector<int>> p;
    memset(dp,-1,sizeof(dp));
    for0(i,m){
        int x,y;
        cin>>x>>y;
        p[x-1].push_back(y-1);
    }
    int cur_max=INT_MIN;
    for(int i=0;i<n;i++){
        cur_max=max(cur_max,findMaxPath(p,i));
    }
    cout<<cur_max;
}