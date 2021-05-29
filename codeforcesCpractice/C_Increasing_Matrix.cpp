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
    for0(i,n){
        for0(j,m){
            cin>>arr[i][j];
        }
    }
    
    for(int i=n-2;i>0;i--){
        for(int j=m-2;j>0;j--){
            if(min(arr[i][j+1]-1,arr[i+1][j]-1)<max(arr[i-1][j]+1,arr[i][j-1]+1)){
                cout<<-1;
                return;
                }
            else if(arr[i][j]==0){
                arr[i][j]=max(min(arr[i][j+1]-1,arr[i+1][j]-1),max(arr[i-1][j]+1,arr[i][j-1]+1));
            }
            
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i][0]>arr[i+1][0]-1){
            cout<<-1;
            return;
        }
        if(arr[i][m-1]>arr[i+1][m-1]-1){
            cout<<-1;
            return;
        }
    }
    for(int j=0;j<m-1;j++){
        if(arr[0][j]>arr[0][j+1]-1){
            cout<<-1;
            return;
        }
        if(arr[n-1][j]>arr[n-1][j+1]-1){
            cout<<-1;
            return;
        }
    }
    int sum=0;
    for0(i,n){
        for0(j,m){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    
}