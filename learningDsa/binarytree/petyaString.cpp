#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main (){
    string a,b;
    cin>>a>>b;
    int sumleft;
    int sumright;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    int i=0;
    while(a[i]==b[i]&&i!=a.size()){
        i++;
    }
    if(i==a.size())
        cout<<0;
    else if(a[i]>b[i])
        cout<<1;
    else
    {
        cout<<-1;
    }
    

}