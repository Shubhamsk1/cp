#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,m;
    int flag=0;
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>l>>r>>m;
        flag=0;
        for(int i=l;i<=r;i++){
            int num=m%i;
            a=i;
            for(int j=l-r;j<=r-l;j++){
                c=j;
                b=c+num;
                if(b>r||b<l||c>r||c<l)
                    continue;
                flag=1;
                cout<<a<<" "<<b<<" "<<c <<endl;
                break;
            }
            if(flag==1)
                break;
        }
    }
}
