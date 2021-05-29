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
        for0(i,n){
            cin>>arr[i];
        }
        int flag=-1;
        vector<pair<int,int>> ans;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]){
                flag=i;
                ans.push_back({1,i+1});
            }
        }   
        if(flag==-1){
            cout<<"NO\n";
        }
        else{
            for(int i=1;i<n;i++){
                if(arr[i]==arr[0]){
                    ans.push_back(make_pair(flag+1,i+1));
                }
            }
            cout<<"YES\n";
            for0(i,n-1){
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }

    }