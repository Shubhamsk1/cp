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

vector<string> ans;

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
int dp[3005][3005];
/*Main function Ends */
int lcs(string& a,string& b,int m,int n){
    if(m==0||n==0) {
        return dp[m][n]=0;
    }
    if(dp[m][n]!=-1) return dp[m][n];
    if(a[m-1]==b[n-1]){
        return dp[m][n]=1+lcs(a,b,m-1,n-1); 
    }
    return dp[m][n]=max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
}


/*Write all function Definition Here */
void solve() { 
    string a,b;
    cin>>a>>b;
    int m,n;
    m=a.size();
    n=b.size();
    memset(dp,-1,sizeof(dp));
    int l=lcs(a,b,m,n); 
    int i=m,j=n;
    string s="";
    while(i!=0&&j!=0){
        if(a[i-1]==b[j-1]){
            s.push_back(a[i-1]);
            i--;
            j--;
            
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(s.begin(),s.end());
    cout<<s;

}