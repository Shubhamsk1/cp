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
    for0(i,n){
        for0(j,m){
            cin>>arr[i][j];
        }
    }
    vector<pair<int,int>> ans;
    vector<vector<int>> b(n,vector<int>(m,0));
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j]==1){
                if(arr[i][j+1]==1&&arr[i+1][j]==1&&arr[i+1][j+1]==1){
                    ans.push_back(make_pair(i+1,j+1));
                    b[i][j]=1;
                    b[i+1][j]=1;
                    b[i][j+1]=1;
                    b[i+1][j+1]=1;
                }
            }

        }
    }
    for0(i,n){
        for0(j,m){
            if(arr[i][j]!=b[i][j]){
                cout<<-1;
                return;
            }
        }
    }
    cout<<ans.size()<<endl;
    for0(i,ans.size()){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
}