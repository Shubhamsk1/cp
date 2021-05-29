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
    vector<int> temp1(n);
    temp1=arr;
    int sum1=0;
    int maxs1=*max_element(arr.begin(),arr.end()-1);
    int mins1=*min_element(arr.begin(),arr.end()-1);
    if(abs(maxs1)<abs(mins1)){
        for(int i=n-2;i>=0;i--){
            if(temp1[i]==mins1){
                temp1.erase(temp1.begin()+i);
                break;
            }
        }
        
    }
    else{
        for(int i=n-2;i>=0;i--){
            if(temp1[i]==maxs1){
                temp1.erase(temp1.begin()+i);
                break;
            }
        }    
    }  
    int sum=0;
    for(int i=temp1.size()-1;i>=1;i--){
        int o=0;
        if(temp1[i]>temp1[i-1]){
            o+=temp1[i]-temp1[i-1];
            temp1[i]=temp1[i-1];
        }
        else{
            o+=temp1[i-1]-temp1[i];
            temp1[i]=temp1[i-1];
        }
        sum+=o;
    }
  
    cout<<sum;

}