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
cout<<"\n";
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */

int board[1000][1000];

bool isSafe(int board[][1000],int row,int col,int n){
    for(int i=0;i<col;i++)
        if(board[row][i]==1)
            return false;
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
        if(board[i][j]==1)  return false;
        
    for(int i=row,j=col;i<n&&j>=0;i++,j--)
        if(board[i][j]==1)  return false;
    return true;
}

bool placequeen(int board[][1000],int col,int n){
    if(col>=n)
        return true;
    for(int i=0;i<n;i++){
        if(isSafe(board,i,col,n)){
            board[i][col]=1;
            if(placequeen(board,col+1,n))
                return true;
            board[i][col]=0;
        }
        
    }
    return false;
}
void printsol(int board[][1000],int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<board[i][j]<<" ";
            cout<<"\n";
        }
}
/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    memset(board,0,sizeof(board));
    if(placequeen(board,0,n)){
        printsol(board,n);
    }
    else{
        cout<<"Solution doesnot exist";
    }

}