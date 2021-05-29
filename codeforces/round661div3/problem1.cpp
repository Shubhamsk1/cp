#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
       
        for(int i=0;i<n;i++){ 
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int i=0;
        sort(nums.begin(),nums.end());
        while(abs(nums[i+1]-nums[i])<=1&&i!=n-1){
            i++;
    
        }
        if(i==n-1){
            cout<<"YES"<<endl;
            }
        else cout<<"NO"<<endl;
        

    }

}