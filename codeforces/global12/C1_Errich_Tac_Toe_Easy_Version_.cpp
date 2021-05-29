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

}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */



/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    vector<string> arr;
    vector<int> r(n,0);
    vector<int> c(n,0);
    for0(i,n){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    for0(i,n){
        for0(j,n){
            if(arr[i][j]=='.'){
                r[i]++;
                c[j]++;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(r[i]==0){
            for(int j=0;j<n;j++){
                if(c[j]==0){
                    if(arr[i][j]=='X'){
                        arr[i][j]='O';
                        r[i]++;
                        c[j]++;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(c[i]==0){
            for(int j=0;j<n;j++){
                if(arr[j][i]=='X'){
                    arr[j][i]='O';
                    r[j]++;
                    c[i]++;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-3;j++){
            if(arr[i][j]=='X'&&arr[i][j+1]=='X'&&arr[i][j+2]=='X'){
                arr[i][j+1]='O';
            }
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-3;j++){
            if(arr[j][i]=='X'&&arr[j][i+1]=='X'&&arr[j][i+2]=='X'){
                arr[j][i+1]='O';
            }
        }
        
    }
    for0(i,n){
        cout<<arr[i]<<endl;
    }

}