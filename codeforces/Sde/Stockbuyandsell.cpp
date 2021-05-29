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
void solve(){
    int n;
    vector<char> arr(n);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int> set;
    // set.insert(1);

    for(int i=0;i<n;i++){
        if(arr[i] == '-'){
            int op = (i-1)%n;
            int op2 = (i+1)%n;
            cout<<op<<op2<<"HEHE\n";
            // set.insert(op);
            // set.insert(op2);
        }
    }
    
    if(set.empty()){
        for(int i=0;i<n;i++){
            if(arr[0] == '>'){
                if(arr[i] == '<'){
                    cout<<0<<endl;
                    return;
                }
            }
            else{
                if(arr[i] == '>' ){
                    cout<<0<<endl;
                    return;
                }
            }   
        }
        cout<<n<<endl;
        return;
    }
    else{
        int ans = set.size();
        cout<<ans<<"\n";
    }

}
int32_t vivek(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}

// _.   ._                 _          ._              _    
// \_ |_ |  | __    __ |  | __  _||_  _ __ |  | _
//  | _ \|  | \_  \ / _\|  |/ /\  \/ /  \  \/ // _ \|  |/ /
//  | \_\ \  |_/ _ \   \__|    <  \   /|  |\   /\  __/|    < 
//  |_  /_(_  /\__  >| \  \_/ |_| \/  \__  >| \
//      \/          \/     \/     \/                    \/     \/