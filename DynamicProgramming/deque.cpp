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
int dp[3001][3001][3];
int result(vector<int>& arr,int i,int j,int last){
    if(i>j) return 0;
    if(dp[i][j][last]!=-1) return dp[i][j][last];
    if(last==2||last==1){
        return dp[i][j][last]=max(arr[i] + result(arr,i+1,j,0),arr[j]+result(arr,i,j-1,0));    
    }
    if(last==0){
        return dp[i][j][last]=min(-arr[i]+result(arr,i+1,j,1),-arr[j]+result(arr,i,j-1,1));
    }

}


/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    vector<int> arr(n);
    for0(i,n) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<result(arr,0,n-1,2);

}