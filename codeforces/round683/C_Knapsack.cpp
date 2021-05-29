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
bool mycomp(pair<int,int> x,pair<int,int> y){
    return x.second<y.second;
}


/*Write all function Definition Here */
void solve() { 
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> arr(n);
    for0(i,n){ 
        int x;
        cin>>x;
        arr[i].first=x;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    int i=0;
    int req=(x+1)/2;
    vector<int> ans;
    bool flag=false;
    while(i<n){
        sum+=arr[i].first;
        ans.push_back(arr[i].second);   
        if(sum>=req&&sum<=x) break; 
        if(sum>x){
            flag=true;
            break;
        }  
        i++;
    }
    
    if(sum<req){
        cout<<-1;
        return;
    }
    if(flag){
       cout<<-1;
       return;
       
    }
    cout<<ans.size()<<endl;
    for(int j:ans) cout<<j<<" ";
    
}
