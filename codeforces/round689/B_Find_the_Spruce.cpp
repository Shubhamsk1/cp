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


/*Write all function Definition Here */
void solve() { 
    int n,m;
    cin>>n>>m;
    vector<string> arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    set<pair<int,int>> star;
    for0(i,n){
        for0(j,m){
            if(arr[i][j]=='*'){
                pair<int,int> p1(i,j);
                star.insert(p1);
            }
        }
    }
    vector<vector<int>> sc(n,vector<int>(m,0));
   
    int c=0;
    int l=floor(sqrt(2.0*m));   
    for(auto i:star){
        for(int k=1;k<=l;k++){
            bool flag=true;
            for(int j=i.second-k+1;j<=i.second+k-1;j++){
                pair<int,int> temp(i.first+k-1,j);
                if(star.find(temp)==star.end()){
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
            else c++;
        }
    }
    cout<<c;
}

    