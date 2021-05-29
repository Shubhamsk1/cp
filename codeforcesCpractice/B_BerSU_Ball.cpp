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



/*Write all function Definition Here */
void solve() { 
    int n,m;
    cin>>n;
    vector<int> b(n);
    for0(i,n) cin>>b[i];
    cin>>m;
    vector<int> g(m);
    for0(i,m) cin>>g[i];
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    int i=0,j=0;
    int count=0;
    while(i<n&&j<m){
        if(abs(b[i]-g[j])<=1){
            i++;
            j++;
            count++;
        }
        else if(b[i]<g[j]){
            i++;
        }
        else if(b[i]>g[j]){
            j++;
        }
        else{
            break;
        }
    }
    cout<<count;
}