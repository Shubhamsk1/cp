#include<bits/stdc++.h>
using namespace std;
long int table[5001][5001];
long int longest(string x,string y,long int m,long int n)
{
    if(m==0||n==0)
        return 0;
    if(table[m][n]!=-1)
        return table[m][n];
    else{
        if(x[m-1]==y[n-1])
        {
            table[m][n]= 1+longest(x,y,m-1,n-1);
            return table[m][n];
        }
        else{
            table[m][n]=max(longest(x,y,m-1,n),longest(x,y,m,n-1));
            return table[m][n];
        }
   
    }
}
int main()
{
    memset(table,-1,sizeof(table));
    string x,y;
    cin>>x>>y;
    long int length=longest(x,y,x.size(),y.size());
    cout<<length;
}