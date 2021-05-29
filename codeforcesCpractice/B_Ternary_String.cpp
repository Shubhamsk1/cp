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

bool check(string s,int length){
    int n =s.size();
    unordered_map<char,int> maps;
    int right=0;
    while(right<length){
        maps[s[right]]++;
        right++;
    }
    if(maps.size()==3) return true;
    while(right<n){
        maps[s[right]]++;
        maps[s[right-length]]--;
        if(maps[s[right-length]]==0)
            maps.erase(s[right-length]);
        if(maps.size()==3) return true;
        right++;
    }
    return maps.size()==3;
}

/*Write all function Definition Here */
void solve() { 
    string s;
    cin>>s;
    int n=s.size();
    int l=2,h=n;
    set<char> sets;
    for(auto i:s) sets.insert(i);
    if(sets.size()<3){
        cout<<0;
        return;
    }
    while(l+1<h){
        int mid=(l+h)/2;
        if(check(s,mid)){
            h=mid;
        }
        else{
            l=mid;   
        }
    }
    cout<<h;
}