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
int dp[100001][2];
/*Main function Ends */
int wins(vector<int>& arr,int n ,int k,int last){
    if(n==1){
        return ((k/arr[0])%2!=0)?0:1;
    }
    if(k==0)    return last;
    if(k<0)     return (last==0)?1:0;
    if(dp[k][last]!=-1) return dp[k][last];

    int x=0;
    for(int i=0;i<n;i++){
        int p=wins(arr,n,k-arr[i],(last==-1||last==1)?0:1);
        x=x+p;   
    }
    if(x==n) return dp[k][last]=1;
    if(x==0) return dp[k][last]=0;
    return dp[k][last]=(last==1||last==-1)?0:1;

}


/*Write all function Definition Here */
void solve() { 
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for0(i,n) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    if(wins(arr,n,k,-1)==0) cout<<"First";
    else cout<<"Second";

}