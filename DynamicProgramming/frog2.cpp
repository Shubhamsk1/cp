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
    int dp[100001];
    /*Main function Ends */
    int cost(vector<int>& arr,int cur,int k,int curcost){
        if(cur<=0) return dp[cur+1]=0;
        if(dp[cur+1]!=-1) return dp[cur+1];
        if(cur<=k) return dp[cur+1]=abs(arr[0]-arr[cur]);
        for(int i=1;i<=k;i++){
            curcost= min(curcost,abs(arr[cur]-arr[cur-i])+cost(arr,cur-i,k,curcost));
        }
        return dp[cur+1]=curcost;
    }


    /*Write all function Definition Here */
    void solve() { 
        int n,k;
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        vector<int> arr(n,0);
        for0(i,n) cin>>arr[i];
        int curcost=1e10;
        cout<<cost(arr,n-1,k,curcost);

    }