#include<bits/stdc++.h>
using namespace std;
const int d=8;

bool canplace(int board[d][d],int r,int c,int n)
{
    return r>=0 && c>=0 && r<n && c<n && board[r][c]==0;
}
bool knightmoves(int board[d][d],int moveno,int currow,int curcol,int n)
{
    if (moveno==n*n)
        return true;
    int rowdir[]={+2,+1,-1,-2,-2,-1,+1,+2};
    int coldir[]={+1,+2,+2,+1,-1,-2,-2,-1};
    for(int i=0;i<8;i++)
    {
        int nextrow=currow+rowdir[i];
        int nextcol=curcol+coldir[i];
        if(canplace(board,nextrow,nextcol,n)==true)
        {
            board[nextrow][nextcol]=moveno+1;
            bool issucceful=knightmoves(board,moveno+1,nextrow,nextcol,n);
            if(issucceful==true)
                return true;
            board[nextrow][nextcol]=0;    
        }
    }
    return false;
}
void printboard(int board[d][d],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(6)<<board[i][j];
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    int board[d][d]={0};
    board[0][0]=1;
    if(knightmoves(board,1,0,0,n))
    {
        printboard(board,n);
    }
    else{
        cout<<"Not possible";
    }
}