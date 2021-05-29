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


int k=1;
/*Write all function Definition Here */
void solve() { 
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for0(i,n){
        for0(j,m)
            cin>>arr[i][j];
    }
    int left[n][1000]={0},right[n][1000]={0},up[n][1000]={0},down[n][1000]={0};
    
    for0(i,m) down[0][i]=arr[0][i];
    for0(i,m) up[n-1][i]=arr[n-1][i];
    for0(i,n) right[i][0]=arr[i][0];
    for0(i,n) left[i][m-1]=arr[i][m-1];

    for(int i=1;i<n;i++)
        for(int j=0;j<m;j++){
            if(arr[i][j]!=0)
            down[i][j]=down[i-1][j]+arr[i][j];
    }
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<m;j++){
            if(arr[i][j]!=0)
            up[i][j]=up[i+1][j]+arr[i][j];
    }
for(int i=0;i<n;i++)
        for(int j=1;j<m;j++){
            if(arr[i][j]!=0)
            right[i][j]=right[i][j-1]+arr[i][j];
        }
    for(int i=0;i<n;i++)
        for(int j=m-2;j>=0;j--){
            if(arr[i][j]!=0)
            left[i][j]=left[i][j+1]+arr[i][j];
        }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(down[i][j]<2&&up[i][j]<2)continue;
        if(right[i][j]<2&&left[i][j]<2) continue;
            int x=down[i][j],y=right[i][j];
            if(x>=2&&y>=2){
                if(y>2*x)  c+=x-1;//downright
                else c+=(x/2-1);
                if(x>2*y) c+=y-1;
                else c+=(y/2-1);
            }
    
            y=left[i][j];//downleft
            if(x>=2&&y>=2){
                if(y>2*x)  c+=x-1;
                else c+=(x/2-1);
                if(x>2*y) c+=y-1;
                else c+=(y/2-1);
            }
            x=up[i][j];//upleft
            if(x>=2&&y>=2){
                if(y>2*x)  c+=x-1;
                else c+=(x/2-1);
                if(x>2*y) c+=y-1;
                else c+=(y/2-1);
            }
            
            
            y=right[i][j];//upright 
            if(x>=2&&y>=2){
                if(y>2*x)  c+=x-1;
                else c+=(x/2-1);
                if(x>2*y) c+=y-1;
                else c+=(y/2-1);
            }
        }
    }
    cout<<"Case #"<<k++<<": "<<c;
}