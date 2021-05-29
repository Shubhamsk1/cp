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
        cin>>s;
        int n=s.size();
        int k;
        cin>>k;
        int a=0,b=0,c=0;
        for0(i,s.size()){
            if(s[i]=='?'){
                a++;
            }
            else if(s[i]=='*'){
                b++;
            }
            else{
                c++;
            }
        }
        if(c==k){
            for0(i,s.size()){
                if(s[i]!='?'&&s[i]!='*'){
                    cout<<s[i];
                }
            }
        }
        else if(c<k){
            int req=k-(c);
            int p=0;
            if(b>=1){
                for0(i,n){
                    if(s[i]!='?'&& s[i]!='*'){
                        cout<<s[i];
                    }
                    if(s[i]=='*'&&p==0){
                        for0(j,req){
                            cout<<s[i-1];
                        }
                        p=1;
                    }

                }
            }
            else{
                cout<<"Impossible";
            }

        }
        else{
            if(c-b-a>k){
                cout<<"Impossible";
            }
            else{
                int req=(c)-k;
                for0(i,n-1){
                
                    if((s[i+1]=='*'||s[i+1]=='?')&&req>0){
                        req--;
                        continue;
                    }
                    if(s[i]!='?'&&s[i]!='*'){
                        cout<<s[i];                    
                    }
                }
                if(s[n-1]!='?'&&s[n-1]!='*')
                    cout<<s[n-1];
            }
        }


    }