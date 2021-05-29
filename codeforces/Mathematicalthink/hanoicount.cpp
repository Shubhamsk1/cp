#include<bits/stdc++.h>
using namespace std;
int counthanoi(int n){
    if(n==1)
        return 1;
    int count=2*counthanoi(n-1)+1;
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<counthanoi(n);
}