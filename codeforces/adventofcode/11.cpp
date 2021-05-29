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
    set<pair<int,int>>occupied;
    set<pair<int,int>>unoccupied;
    vector<string> arr;
    string s;
    while(getline(cin,s)){
        arr.push_back(s);
    }
    int n=arr.size(),m=arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i]=='L'){
                occupied.insert({i,j});
            }
        }
    }
    int size=0;
    while(size!=occupied.size()){
        size=occupied.size();
        int c=0;
        for(auto i:occupied){
            int x=i.first-1;
            pair<int,int> temp(x,i.second);
            if(occupied.find()){

            }
        }
    }


}