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
int dp[100001][4];
int points(vector<int>& a,vector<int> &b,vector<int> &c,int n,int last){
    if(n<1) return 0;
    if(dp[n][last]!=-1) return dp[n][last] ;
    if(last==0) 
        return dp[n][last]=max(b[n-1]+points(a,b,c,n-1,1),c[n-1]+points(a,b,c,n-1,2));
    if(last==1)
        return dp[n][last]=max(a[n-1]+points(a,b,c,n-1,0),c[n-1]+points(a,b,c,n-1,2));
    if(last==2)
        return dp[n][last]=max(a[n-1]+points(a,b,c,n-1,0),b[n-1]+points(a,b,c,n-1,1));

    return dp[n][last]=max(a[n-1]+points(a,b,c,n-1,0),max(b[n-1]+points(a,b,c,n-1,1),c[n-1]+points(a,b,c,n-1,2)));
}


/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    memset(dp,-1,sizeof(dp));
    for0(i,n) cin>>a[i]>>b[i]>>c[i];
    cout<<points(a,b,c,n,3);


}