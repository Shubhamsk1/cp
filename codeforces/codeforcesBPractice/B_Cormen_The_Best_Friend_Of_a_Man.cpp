/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define endl "\n"
using namespace std;
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
    int n,x;
    cin>>n>>x;
    vector<int> arr(n+2,0);
    vector<int> ans(n+2,0);
    arr[0]=arr[n+1]=x;
    for(int i=1;i<=n;i++) cin>>arr[i];
    int c=0;
    for(int i=1;i<n;i++){
        int a=x-arr[i-1]-arr[i];
        int b=x-arr[i+1]-arr[i];
        
        if(a<0) a=0;
        if(b<0) b=0;
        arr[i+1]=arr[i+1]+max(a,b);
        c+=max(a,b);
    }
    cout<<c<<endl;
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    


}