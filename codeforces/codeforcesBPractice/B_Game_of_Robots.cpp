    /* Code by shubhamsk1 */
    /* Shubham S Kudekar */
    #include<bits/stdc++.h>
    #define int long long
    #define for0(i, n) for (int i = 0; i < n; i++)
    #define for1(i, n) for (int i = 1; i <= n; i++)
    #define endl "\n"
    using namespace std;
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
        int n,x;
        cin>>n>>x;
        vector<int> arr(n,0);
        for0(i,n) cin>>arr[i];
        vector<int> suffix(n+1,0);
        for(int i=1;i<n+1;i++){
            suffix[i]=suffix[i-1]+i;
        }
        int i;
        for(i=1;i<n+1;i++){
            if(suffix[i]>=x)
                break;
        }
        int k=(i*(i+1)/2)-((i-1)*i/2);
        int index=x-((i-1)*i/2);
        cout<<arr[(index-1)%n];

    }