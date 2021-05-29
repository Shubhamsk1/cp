#include<bits/stdc++.h>
using namespace std;

int counts=0;

void printpretty(vector<int>& perm){
    int n=perm.size();
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        arr[i][perm[i]]=1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void printpermute(vector<int>& permute){
    for(auto i=permute.begin();i!=permute.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}


bool findk(vector<int>& perm,int k){
    for(int i=0;i<perm.size();i++){
        if(perm[i]==k){
            return true;
        }
    }
    return false;
}


bool can_be_extended_to_solution(vector<int>& perm){
    int i=perm.size()-1;
    for(int j=0;j<i;j++){
        if(i-j==abs(perm[i]-perm[j]))
            return false;
    }
    return true;
}


void  extend(vector<int> &perm,int n){
    if(perm.size()==n){
        counts++;
        return ;
    }
    for(int k=0;k<n;k++){
        if(!findk(perm,k)){
            perm.push_back(k);
            if(can_be_extended_to_solution(perm)){
                extend(perm,n);  
            }
            perm.pop_back();
        }
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> p; 
    extend(p,n);
    cout<<counts;
}
