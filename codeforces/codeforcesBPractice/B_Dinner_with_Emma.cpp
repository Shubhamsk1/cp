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
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans(m,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=ans[j][i];
        }
    }
    int mini=-1,mins=LONG_MAX;
    for(int i=0;i<=m;i++){
        mins=min(mins,*min_element(ans[i].begin(),ans[i].end()));
        if(mins==*min_element(ans[i].begin(),ans[i].end()))
            mini=min_element(ans[i].begin(),ans[i].end())-ans[i].begin();        
    }
    int maxi=-1,maxs=LONG_MIN;
    for(int i=0;i<n;i++){
        maxs=max(maxs,*max_element(arr[i].begin(),arr[i].end()));
         if(maxs==*max_element(arr[i].begin(),arr[i].end()))
            maxs=max_element(arr[i].begin(),arr[i].end())-arr[i].begin();        
    }
    cout<<arr[maxs][maxi];


}