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
    int n,m;
    char r;
    cin>>n>>m;
    cin>>r;
    vector<string> arr(n);
    for0(i,n){
        cin>>arr[i];
    }
    set<char> sets;
    for0(i,n){
        for0(j,m){
            if(arr[i][j]==r){
                if(i>0)
                    sets.insert(arr[i-1][j]);
                if(i<n-1) 
                    sets.insert(arr[i+1][j]);
                if(j>0)
                    sets.insert(arr[i][j-1]);
                if(j<m-1)
                    sets.insert(arr[i][j+1]);
            }
        }
    }
    int ans=sets.size();
    if(sets.find(r)!=sets.end())
        ans--;
    if(sets.find('.')!=sets.end())
        ans--;
    cout<<ans;

}