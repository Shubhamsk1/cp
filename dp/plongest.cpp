#include<bits/stdc++.h>
using namespace std;
int  plongest(string x,string y,int m,int n)
{
    if(m==0||n==0)
        return 0;
    else{
        if(x[m-1]==y[n-1])
        {
            int t=1+plongest(x,y,m-1,n-1);
            cout<<x[m];
            return t;
        }
        else{
            int ma=max(plongest(x,y,m-1,n),plongest(x,y,m,n-1));
            return ma;
        }
    }
}
int main()
{
    string x,y;
    cin>>x>>y;
    plongest(x,y,x.size(),y.size());
}