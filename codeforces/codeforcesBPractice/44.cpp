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

/*is Single Test case?*/;
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
    int arr[n];
    for0(i,n)
        cin>>arr[i];
    int large=-1e18;
    int maxi=-1;
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
            maxi=i;
            c=1;
        }
        if(arr[i]==large)
            c++;
    }
    int flagl=true,flagr=true;
    int i=maxi-1,j=maxi+1;
    while(i>=0){
        if(arr[i-1]>=arr[i]){
            flagl=false;
            break;
        }
        i--;
    }
    while(j<n){
        if(arr[j]<=arr[j+1]){
            flagr=false;
            break;
        }
        j++;
    }
    string ans = (flagl==flagr==true&&c==1)?"YES":"NO";
    cout<<ans;
}