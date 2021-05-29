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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for0(i,n){ 
        cin>>arr[i];
    }
    vector<int> w(k);
    for0(i,k) cin>>w[i];
    sort(arr.begin(),arr.end());
    sort(w.begin(),w.end());
    int q=0;
    while(arr[q]<0 && q<n) q++;
    sort(arr.begin(),arr.begin()+q,greater<int>());
    int i=0,j=n-1;
    int sum=0;
    int p=0;
    while(i<=j&&p<k){
        if(w[p]-1==0){
            sum+=arr[j]*2;
        }
        else{
            sum+=arr[j]+arr[i];
        }
        i+=w[p]-1;
        j--;
        p++;
    }
    cout<<sum;

    
}