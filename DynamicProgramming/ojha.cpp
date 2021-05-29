#include <bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;} 
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
#define NFS(nitro) ios_base::sync_with_stdio(false);cin.tie(0);
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void print(T t, V... v) {_print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#define int long long
#define vivek main
#define all(x) (x).begin(),(x).end()
#define vec_p vector<pair<int,int>
#define v vector<int>
v a,b,c;
int n;
int dp[100001][2][2][2];
int Vacation(int index,int swim,int bugs,int hw){
    
    if(index == n-1){
        int mx = max(a[index],max(b[index],c[index]));
        if(mx == a[index] && swim == 0) return dp[index+1][swim][bugs][hw] = a[index];
        if(mx == b[index] && bugs == 0) return dp[index+1][swim][bugs][hw] = b[index];
        if(mx == c[index] && hw == 0)   return dp[index+1][swim][bugs][hw]= c[index];
        if(mx == a[index])  return  dp[index+1][swim][bugs][hw]= max(b[index],c[index]);
        if(mx == b[index])  return dp[index+1][swim][bugs][hw] = max(c[index],a[index]);
        if(mx == c[index])  return dp[index+1][swim][bugs][hw]= max(a[index],b[index]);
    }
    if(dp[index+1][swim][bugs][hw]!=-1) return dp[index+1][swim][bugs][hw];
    int first = INT16_MIN,second = INT16_MIN,third = INT16_MIN;
    if(swim == 0)    first = a[index]+  Vacation(index + 1,swim + 1,0,0);
    if(bugs == 0)    second = b[index] + Vacation(index + 1,0,bugs + 1,0);
    if(hw == 0)      third = c[index] +  Vacation(index + 1,0,0,hw + 1);
    
    return dp[index+1][swim][bugs][hw]= max(first,max(second,third));
}

void solve(){
    cin>>n;
    memset(dp,-1,sizeof(dp));
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    cout<<Vacation(0,0,0,0);
}
int32_t vivek(){
    #ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout);
#endif
    NFS(NITRO);
    int t=1;
    // cin>>t;
    while(t-->0)
        solve();
    return 0;
}