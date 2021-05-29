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
double dp[301][301][301];
double moves(int n,int one,int two,int three){
    if(one<0||two<0||three<0) return 0.0;
    if(one==0&&two==0&&three==0) return dp[one][two][three]=0.0;
    double p0=(n-one-two-three)/double(n);
    double p1=one/double(n);
    double p2=two/double(n);
    double p3=three/double(n);
    if(dp[one][two][three]!=-1.0) return dp[one][two][three];
    return dp[one][two][three]=(1.0+p1*moves(n,one-1,two,three)+p2*moves(n,one+1,two-1,three)+p3*moves(n,one,two+1,three-1))/(1.0-p0);
}



/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    int one=0,two=0,three=0;
    for0(i,n){
        int x;
        cin>>x;
        if(x==1) one++;
        if(x==2) two++;
        if(x==3) three++;
    }
    for(int i=0;i<301;i++){
        for( int j=0;j<301;j++)
            for(int k=0;k<301;k++)
                dp[i][j][k]=-1.0;
    }
    cout<<setprecision(16)<<moves(n,one,two,three);
}