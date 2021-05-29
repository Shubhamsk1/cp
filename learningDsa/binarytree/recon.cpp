#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    int small=1001;
    int smallx;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])<small){
            smallx=i;
            small=abs(arr[i]-arr[i+1]);
        }
    }
    if(abs(arr[n-1]-arr[0])<small)
        cout<<n<<" "<<1;
    else
    {
        cout<<smallx+1<<" "<<smallx+2;
    }
    
}