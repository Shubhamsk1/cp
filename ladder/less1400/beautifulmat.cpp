#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    int arr[6][6];
    int x,y;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    cout<< (abs(3-x)+abs(3-y));
}