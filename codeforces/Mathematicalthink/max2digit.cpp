#include<bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    for(int i=10;i<=55;i++){
        if((100-i>=10)&&(100-i)<=99&&(100-i)!=i){
            count++;
        }
    }
    cout<<count<<endl;
}