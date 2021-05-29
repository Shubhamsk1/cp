#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void flipString(string & a,int i){
    string temp=a.substr(0,i+1);
                for(int j=0;j<temp.size();j++) a[j]=a[j]=='1'? '0':'1';
                string t="";   
                for(auto x=a.rbegin();x!=a.rend();x++) t+=*x;
                a.erase(a.begin(),a.begin()+i+1);
                t=t+a;
                a=t;  
             
}
int main(){
    Ios;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        vector<int> op;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i])
                continue;
            else{
                if(i!=0){
                flipString(a,i);
                op.push_back(i+1);
                flipString(a,0);
                op.push_back(1);
                flipString(a,i);
                op.push_back(i+1);
                count+=3;
                }
                else{
                    flipString(a,0);
                    op.push_back(1);
                    count+=1;
                }
            }
        }
        cout<<count<<" ";
        for(int j=0;j<count;j++) cout<<op[j]<<" ";
        op.clear();
        cout<<"\n";
    }
}