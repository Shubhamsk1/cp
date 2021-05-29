#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int temp;
    while(cin>>temp)
    {
        arr.push_back(temp);
    }
    int best=0;
    int sum=0;
    for(int k=0;k<arr.size();k++)
    {
        sum=max(arr[k],sum+arr[k]);
        best=max(sum,best);
    }
    cout<<sum;
}