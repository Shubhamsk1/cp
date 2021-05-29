#include<bits/stdc++.h>
using namespace std;
int powersum(int x,int n,int exp)
{ 
    if(x==0)
        return 1;
    else if(x<0)
        return 0;
    else{
        int t=int(pow(x,1/float(n)));
        if(t!=exp)
        {
            int total=0;
            for(int i=0;i<t;i++)
                total = total + powersum(x-pow(t,n),n,t);
            return total;
        }
        else
        {
                return 0;
        }
        
    }
}

int main()
{
    int x,n;
    cin>>x>>n;
    int result=powersum(x,n,0);
    cout<<result;
    return 0;
}