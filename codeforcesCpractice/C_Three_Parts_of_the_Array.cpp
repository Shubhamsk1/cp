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
    int n ;
    cin>>n;
    vector<int> arr(n);
    for0(i,n)cin>>arr[i];
    int i=0,j=n-1;
    int sum1=0,sum2=0;
    int tsum1=0,tsum2=0;
    while(i<j){
        sum1=arr[i],sum2=arr[j];
        while(i<=j){
            if(sum1>sum2){
                sum2+=arr[--j];
            }
            else if(sum1<sum2){
                sum1+=arr[++i];
            }
            else{
                tsum1+=sum1;
                tsum2+=sum2;
                i++;
                j--;
                break;
            }
        }
    }
    if(tsum1==tsum2){  
        cout<<tsum1;
        return ;
    }
    else{
        cout<<0;
    }

}