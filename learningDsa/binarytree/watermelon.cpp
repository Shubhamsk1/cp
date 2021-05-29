#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min=1001;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,y;
    int mins=abs(arr[0]-arr[n-1]);
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])<min)
        {
            x=i+1;
            y=x+1;
            min=abs(arr[i]-arr[i+1]);
            flag=1;
            cout<<x<<" "<<y;
            break;
        }
    }
    if(flag==0)
        cout<<n<<" "<<1;
    
    
    
    
}