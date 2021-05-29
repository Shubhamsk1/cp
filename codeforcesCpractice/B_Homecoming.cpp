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
    int a,b,p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    int n=s.size();
    int r=n-1;
    while(r>=1){
        if(s[r]!=s[r-1]){
            break;
        }
        r--;
    }
    string arr;
    for0(i,r){
        if(arr[arr.size()-1]!=s[i]){
            arr=arr+s[i];
        }
    }
    
    int total=0;
    int ac=0,bc=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]=='A') ac++;
        if(arr[i]=='B') bc++;
    }
    total=ac*a+bc*b;
    if(s[n-1]==s[n-2]){
        total+=(s[n-1]=='A')?a:b;
    }
    int ans=0;
    cout<<arr;
    cout<<total;
    for(int i=0;i<arr.size();i++){
        if(total>p){
            if(arr[i]=='A') total-=a;
            else if(arr[i]=='B') total-=b;
        }
        else{
            ans=i+1;
            break;
        }
    }
    if(ans==0) cout<<n;
    else cout<<ans;


}