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
 
/*is Single Test case?*/cin>>t;
while(t--)
{ 
solve(); 
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;
 
return 0;
} 
/*Main function Ends */
 
bool my_comp(vector<int>a,vector<int>b){
 
}
 
/*Write all function Definition Here */
void solve() { 
    int n,m;
    cin>>n>>m;
    vector<int> rows[n];
    vector<int> columns[m];
    for0(i,n){
        for0(j,m){
            int x;
            cin>>x;
            rows[i].push_back(x);
        }
    }
    for0(i,m){
        for0(j,n){
            int x;
            cin>>x;
            columns[i].push_back(x);
        }
    }
    
    int arr[n][m];
    
    map<int,int> mi;
    for(int i=0;i<n;i++){
        mi.insert({rows[i][0],i});
    }
    for0(i,n){
        if(mi.find(columns[0][i])!=mi.end()){
            for(int j=0;j<m;j++){
                cout<<rows[mi[columns[0][i]]][j]<<" ";
            }
            cout<<endl;
        }
    }
   
    
}
 