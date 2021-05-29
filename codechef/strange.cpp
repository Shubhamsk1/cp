#include<bits/stdc++.h>
using namespace std;
int strange(int x,int k)
{
    int count=0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
          while(x%i==0)
         {
             x=x/i;
             count++;
         }
        }
    
    }
    if(x>1)
        count++;
    if(k<=count)
        return 1;
    return 0;

}

int main()
{
    int x,k;
    cin>>x>>k;
    cout<<strange(x,k);

}