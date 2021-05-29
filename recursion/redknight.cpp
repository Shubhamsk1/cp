#include<bits/stdc++.h>
using namespace std;
const int d=200;
int board[d][d];
bool canplace(int x,int y,int n)
{
    return x<n&&y<n&&board[x][y]==-1&&x>=0&&y>=0;
}void printb(int board[d][d],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(3)<<board[i][j];
        }
        cout<<"\n";
    }
}
void pathfinder(int board[d][d],int n,int s1,int e1,int s2,int e2)
{
    if(s2==s1&&e2==e1)
        return ;
    int choicex[6]={+2,+2,0,-2,-2,0};
    int choicey[6]={+1,-1,-2,-1,+1,+2};
    string path[6]={"UL","UR","R","LR","LL","L"};
    for(int i=0;i<6;i++)
    {
        int newx= s2+choicex[i];
        int newy= e2+choicey[i];
        if(board[newx][newy]==board[s2][e2]-1)
        {
            cout<<path[i]<<" ";
            pathfinder(board,n,s1,e1,newx,newy);
            return;

        }
    }
}
void shortpath(int board[d][d],int n,int s1,int e1,int s2,int e2)
{
    int choicex[6]={-2,-2,0,+2,+2,0};
    int choicey[6]={-1,+1,+2,+1,-1,-2};
    queue<int> row;
    queue<int> col;
    queue<int> lev;
    string path[6]={"UL","UR","R","LR","LL","L"};
    row.push(s1);
    col.push(e1);
    lev.push(0);
    while(!row.empty())
    {
        int curx=row.front();
        int cury=col.front();
        int curl=lev.front();
        row.pop();
        col.pop();
        lev.pop();
        for(int i=0;i<6;i++)
        {
            int newx=curx+choicex[i];
            int newy=cury+choicey[i];
            int newl=curl+1;
            if(canplace(newx,newy,n))
            {
                row.push(newx);
                col.push(newy);
                lev.push(newl);
                board[newx][newy]=newl;
                if(newx==s2&&newy==e2)
                {
                    cout<<newl<<"\n";
                    pathfinder(board,n,s1,e1,s2,e2);
                    return;
                }
            }
        }
    }
    cout<<"Impossible";
}
int main()
{
    int n;
    cin>>n;
    int s1,e1,s2,e2;
    cin>>s1>>e1>>s2>>e2;
    memset(board,-1,sizeof(board));
    board[s1][e1]=0;
    shortpath(board,n,s1,e1,s2,e2);
    cout<<"\n";
    printb(board,n);
    
}