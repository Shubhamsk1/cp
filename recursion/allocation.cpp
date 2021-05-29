#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=1;
    while(t--)
    {    
        long int n,b;
        cin>>n>>b;
        int arr[n];
        for(long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long int count =0;
        for(long int i=0;i<n;i++)
        {
            if(arr[i]<=b)
            {
                count++;
                b=b-arr[i];
            }
            if(b==0)
                break;
        }
        

    }

}