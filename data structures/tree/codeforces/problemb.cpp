#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int arr[100001];
int LIS(int i, int n, int prev,int prev_index)
{
	// Base case: nothing is remaining
	if (i == n)
		return 0;

	// case 1: exclude the current element and process the
	// remaining elements
	int excl = LIS(i + 1, n, prev,prev_index);

	// case 2: include the current element if it is greater
	// than previous element in LIS
	int incl = 0;
	if (arr[i] > prev&&i%prev_index==0)
		incl = 1 + LIS(i + 1, n, arr[i],i);

	// return maximum of above two choices
	return max(incl, excl);
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
       
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        arr[0]=0;
        int count=LIS(1,n+1,0,1);      
        cout<<count;   
    }
}