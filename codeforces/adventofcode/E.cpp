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
    string s;
    set<int> sets;
    int ans=LONG_MIN;
    while(cin>>s){
        int n=s.size();
        int lr=0,rr=127;
        for(int i=0;i<6;i++){
            if(s[i]=='F'){
                rr=(rr+lr)/2;
            }
            if(s[i]=='B'){
                lr=ceil((lr+rr)/2.0);
            }
        }
        int lc=0,rc=7;
        for(int i=7;i<s.size()-1;i++){
            if(s[i]=='R'){
                lc=ceil((lc+rc)/2.0);
            }
            if(s[i]=='L'){
                rc=(lc+rc)/2;
            }
        }
        if(s[6]=='F'){
            if(s[n-1]=='R'){
                ans=max(ans,lr*8+rc);
                sets.insert(lr*8+rc);
                   
            }
            else{
                ans=max(ans,lr*8+lc);
                sets.insert(lr*8+lc);
                 
            }
        }
        else{
            if(s[n-1]=='R'){
                ans=max(ans,rr*8+rc);
                sets.insert(rr*8+rc);
            }
            else{
                ans=max(ans,rr*8+lc);
                sets.insert(rr*8+lc);
            }
        }
        
    }
    for(int i=39;i<=998;i++){
            if(sets.find(i)==sets.end()){
                cout<<i;
                break;
            }
        }
   
    


}