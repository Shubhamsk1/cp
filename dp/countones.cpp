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

int bin_to_decimal(vector<int>& arr,int n){
    int sum=0;
    for0(i,n){
        sum+=arr[i];
        if(i!=n-1)
            sum=sum*2;
    }
    return sum;
}
void modifyArr(vector<int>&arr,int n){
    vector<int>temp=arr;
    
    for(int i=1;i<n-1;i++){
        if(arr[i-1]==arr[i+1]) temp[i]=1;
        else temp[i]=0;
    }
    temp[0]=temp[n-1]=0;
    arr=temp;
}

/*Write all function Definition Here */
void solve() { 
    int n,x;
    cin>>n>>x;
    vector<int> arr(n,0);
    for0(i,n){
        int k;
        cin>>k;
        arr[i]=k;
    }
    vector<int>  stores;
    int p=bin_to_decimal(arr,n);
    while(find(stores.begin(),stores.end(),p)==stores.end()){
        stores.push_back(p);
        modifyArr(arr,n);
        p=bin_to_decimal(arr,n);
        for0(i,n){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int m=stores.size();
    
    cout<<endl;
    int k=stores[x%m];
    cout<<k<<" "; 
    int count=0;
    while(k!=0){
        if(k&1) count++;
        k>>=1;
    }
    cout<<count;
}