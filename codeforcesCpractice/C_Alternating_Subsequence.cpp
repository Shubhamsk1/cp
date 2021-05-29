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

/*is Single Test case?*/cin>>t;
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
    int n;
    cin>>n;
    vector<int> arr(n);
    for0(i,n) cin>>arr[i];
    bool ln;
    int maxn=LONG_MIN;
    int maxp=0;
    if(arr[0]>0) {
        ln=false;
        maxp=arr[0];
    }
    else{
        ln=true;
        maxn=arr[0]; 
    }
    int sum=0;
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            if(!ln) {
                maxn=arr[i];
                sum+=maxp;
                maxp=0;
            }
            maxn=max(maxn,arr[i]);
            ln=true;
        }
        else{
            if(ln){
                maxp=arr[i];
                sum+=maxn;
                maxn=LONG_MIN;
            }
            maxp=max(maxp,arr[i]);
            ln=false;
        }
       
        
    }
     if(arr[n-1]<0&&ln){
            sum+=max(maxn,arr[n-1]);
        }
    else if(arr[n-1]>0&&!ln){
        sum+=max(maxp,arr[n-1]);
        }
    cout<<sum;
}