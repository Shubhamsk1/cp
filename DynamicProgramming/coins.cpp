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
double dp[3000][3000];
double findprob(vector<double>& prob,int n,int h ,int t){
    if(n<(t-h+1)&&(h-t<=0)) return dp[n][h]=double(0.0);
    if(n==0) return dp[n][h]=double(1.0);               
    if(dp[n][h]!=-1) return dp[n][h];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    return dp[n][h]=double(prob[n-1])*findprob(prob,n-1,h+1,t)+double(1.0-prob[n-1])*findprob(prob,n-1,h,t+1);
}

/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
   for(int i=0;i<3000;i++){
       for(int j=0;j<3000;j++)
        dp[i][j]=double(-1.0);
   }
    vector<double> prob(n);
    for0(i,n)cin>>prob[i];
    cout<<fixed<<setprecision(10)<<findprob(prob,n,0,0);
}