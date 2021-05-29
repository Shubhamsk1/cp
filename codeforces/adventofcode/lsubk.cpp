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
bool isValidLen(string s, int len,int k){
    unordered_map<char,int> maps;
    int right=0;
    int n=s.size();
    while(right<len){
        maps[s[right]]++;
        right++;
    }
    if(maps.size()<=k) return true;
    while(right<n){
        maps[s[right-len]]--;
        maps[s[right]]++;
        if(maps[s[right]-len]==0)
            maps.erase(s[right-len]);
        if(maps.size()<=k) return true;
        right++;
    }
    return maps.size()<=k;

}

int lenmaxsub(string s,int k){
    int n=s.size();
    set<char> sets;
    for(auto i:s){
        sets.insert(i);
    }
    if(sets.size()<k){
        return -1;
    }
    int l=-1,h=n+1;
    while(l+1<h){
        int mid=(l+h)>>1;
        if(isValidLen(s,mid,k)){
            l=mid;
        }
        else{
            h=mid;
        }
    }
    return l;
}


/*Write all function Definition Here */
void solve() { 
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    cout<<lenmaxsub(s,k);

}