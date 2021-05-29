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
    set<int> sets;
    for0(i,m){
        int x;
        cin>>x;
        sets.insert(x);
    }
    if(sets.find(1)!=sets.end()||sets.find(n)!=sets.end()){
        cout<<"NO";
        return;
    }
    else
    {
        for(auto i=sets.begin();i!=sets.end();i++){
            if((sets.find(*i)!=sets.end())&&(sets.find(*i-1)!=sets.end())&&(sets.find(*i-2)!=sets.end())){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
    }
    

}