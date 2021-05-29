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
solve(); 

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */
/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for0(i,n) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int k;
    cin>>k;
    while(k--){
        int a,b;
        cin>>a>>b;
        int x1; 
        int l=-1;
        int r=arr.size();
        while(l+1<r){
            int mid=(l+r)/2;
            if(arr[mid]>=a){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        x1=r;
        l=-1; r=n;
        while(l+1<r){
        int mid=(l+r)/2;
        if(arr[mid]>b){
            r=mid;
        }
        else{
            l=mid;
        }
        
    }
    int x2=l;
    if(x2==n) x2=0;
    if(x1==-1) x1=0;
    cout<<abs(x2-x1+1)<<" ";
    }

}