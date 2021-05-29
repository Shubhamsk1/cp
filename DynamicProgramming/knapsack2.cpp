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
map<int,map<int,int>> memo;
int dp[109][100009];
/*Main function Ends */
int points(vector<int>& weights,vector<int>& value, int r, int n) {
    if(n<=0)
        return r == 0 ? 0 : INT_MAX;
 
    if(dp[n][r] != -1)
    	return dp[n][r];
 
    int  ans = points(weights,value,r,n-1);
    if(value[n-1] <= r)
    	ans = min(ans, weights[n-1] + points(weights,value,r-value[n-1],n-1));
     
    return dp[n][r]=ans;
}
 
int s(vector<int>& weights,vector<int>& value,int n,int v_max,int w) {
 
	for(int i = v_max; i >= 0; i--) {
		if(points(weights,value, i,n) <= w)
			return i;
	}
	return 0;
}


/*Write all function Definition Here */
void solve() { 
    int n ,w ;
    cin>>n>>w;
    memset(dp,-1,sizeof(dp));
    vector<int> weights(n),value(n);    
    int maxval=0;
    for0(i,n){
        cin>>weights[i]>>value[i];
        maxval+=value[i];
    }
    cout<<s(weights,value,n,maxval,w);

}