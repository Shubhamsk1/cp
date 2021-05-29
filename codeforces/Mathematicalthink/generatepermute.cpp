#include<bits/stdc++.h>
using namespace std;
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
void generate_permutations(vector<int> perm ,int n){
    if(perm.size()==n){
        printpermute(perm);
        return ;
    }
    for(int k=0;k<n;k++){
        if(!findk(perm,k)){
            perm.push_back(k);
            generate_permutations(perm,n);
            perm.pop_back();
        }
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> p;
    generate_permutations(p,n);

}