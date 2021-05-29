#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int d=100;
int maze[d][d]={0};
bool canplacemice(int arr[d][d],int r,int c,int n)
{
    return r<n&&c<n&&arr[r][c]!=0;
}
void printmaze(int maze[d][d],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(3)<<maze[i][j];
        }
        cout<<"\n";
    }
}
bool ratmaze(int arr[d][d],int curr,int curc,int n)
{
    if(maze[n-1][n-1]==1)
        return true;
    int choicer[]={0,+1};
    int choicec[]={+1,0};
    int newr,newc;
    for(int i=0;i<2;i++)
    {
        newr=curr+choicer[i];
        newc=curc+choicec[i];
        if(canplacemice(arr,newr,newc,n))
        { 
            maze[newr][newc]=1;
            bool issuccessful=ratmaze(arr,newr,newc,n);
            if(issuccessful==true)
                return true;
            maze[newr][newc]=0 ;   
        }
 
    }
    return false;
 
}
 
int main()
{
    int n;
    cin>>n;
    maze[0][0]=1;
    int arr[d][d]={ 
                {1, 0, 0, 0},
                {1, 1, 0, 1},
                {0, 1, 0, 0},
                {1, 1, 1, 1}};
    bool ans=ratmaze(arr,0,0,n);
   if(ans==true)
		printmaze(maze,n);
}