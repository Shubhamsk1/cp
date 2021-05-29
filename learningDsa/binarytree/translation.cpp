#include<bits/stdc++.h>
using namespace std;
int main (){
    string code1,code2;
    cin>>code1>>code2;
    string newcode;
    for(auto i=code1.rbegin();i!=code1.rend();i++){
        newcode+=*i;
    }
    if(newcode==code2)
        cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
}