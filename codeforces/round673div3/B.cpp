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
    vector<vector<int>>matrix(2,vector<int>(2,0));
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        for0(j,2){
            for0(k,2){
                int x;
                cin>>x;
                matrix[j][k]=x;
            }
        }
        if(matrix[0][1]==matrix[1][0]&&matrix[0][0]==matrix[1][1]){
            c1++;
        }
        else if(matrix[0][1]==matrix[1][0]){
            c2++;
        }
        else if(matrix[0][0]==matrix[1][1]){
            c3++;
        }
    }
    if(c1>0&&m%2==0){
        cout<<"YES";
    }
    else if(c2>0&&m%2==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}