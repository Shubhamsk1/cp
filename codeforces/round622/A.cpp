/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
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
    int arr[3];
    int count=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        if(arr[i]>0){
            count++;
            arr[i]--;
        }
    }
    sort(arr,arr+3);
    if(arr[1]&&arr[2]){
        count +=1;
        arr[1]--;
        arr[2]--;
    }
    if(arr[0]&&arr[1]){
        count++;
        arr[0]--;
        arr[1]--;
    }
    if(arr[0]&&arr[2]){
        count++;
        arr[0]--;
        arr[2]--;
    }
    if(arr[0]&&arr[1]&&arr[2]){
        count++; 
        arr[0]--;
        arr[1]--;
        arr[2]--;
    }
    cout<<count;

}