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
    int n;
    cin>>n; 
    vector<int> arr(n);
    for0(i,n) cin>>arr[i];
    map<int,int> sumcount;
    sort(arr.begin(),arr.end());
    if(n==1){ 
        cout<<0;
        return;
    }
    int maxs=0;
    set<int> index;
    int small=arr[0]+arr[1];
    int large=arr[n-1]+arr[n-2];
    for(int i=small;i<=large;i++){
        index.clear();
        for(int j=0;j<n-1;j++){
            int req=i-arr[j];
            if(req<0) break;
            for(int k=j+1;k<n;k++){
                if(arr[k]==req && index.find(k)==index.end()){
                    index.insert(j);
                    index.insert(k);
                    break;
                }
            }
        }
        int mins=index.size();
        maxs=max(maxs,mins);
    }
    cout<<maxs/2;

}