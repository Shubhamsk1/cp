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
    int n ,k;
    cin>>n>>k;
    int arr[n];
    for0(i,n) cin>>arr[i];
    for0(i,k){
        int x;
        cin>>x;
        int left=0,right=n-1;
        bool flag = false;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]==x){
                flag = true;
                break;
            }
            else if(arr[mid]<x){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}