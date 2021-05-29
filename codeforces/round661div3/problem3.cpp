#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int arr[101];
int pairs_count(int start , int end ,int sum){
    int count =0;
    while(start<end){
        if(sum==(arr[start]+arr[end]))  {
            count++;
            start++;
            end--;}
        else if((arr[start]+arr[end])<sum){
            start++;
        }    
        else{
            end--;
        }
    }
    return count;
}


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        int count =0;
        for(int sum=2;sum<=(2*arr[n]);sum++){
            int x=pairs_count(1,n,sum);
            if(x>count)
                count=x;            
        }
        cout<<count<<endl;
      
        
        
        
        
    }

}