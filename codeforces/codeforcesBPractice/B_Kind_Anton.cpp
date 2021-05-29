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
    int n ;
    cin>>n;
    vector<int> arr(n);
    vector<int> b(n);
    int one=0,mone=0,zero=0;
    for0(i,n){
        cin>>arr[i];
        if(arr[i]==1) one++;
        if(arr[i]==0) zero++;
        if(arr[i]==-1) mone++;
    }
    for0(i,n)cin>>b[i];
    bool flag=true;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=b[i]){
            if((one==0&&b[i]>0)||(mone==0&&b[i]<0)||(b[i]==0&&arr[i]>=0&&mone==0)
            ||(b[i]==0&&arr[i]<=0&&one==0)||(arr[i]==1&&b[i]>0&&one<=1)||
            (arr[i]==-1&&b[i]<0&&mone<=1)||(arr[i]==0&&b[i]>0&&one==0)||(arr[i]==0&&b[i]<0&&mone==0)){
                flag=false;
                break;
            }
            else{
                if(arr[i]==1) one--;
                else if(arr[i]==0) zero--;
                else mone--;
            }
        }
        else{
            if(arr[i]==1) one--;
            if(arr[i]==-1) mone--;
            if(arr[i]==0) zero--;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}