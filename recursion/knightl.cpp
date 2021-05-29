#include<bits/stdc++.h>
using namespace std;
const int d=25;
int board[d][d];
bool canplace(int x,int y,int n)
{
    return x<n&&y<n&&board[x][y]==-1&&x>=0&&y>=0;
}
void printb(int board[d][d],int n)
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
void printb(int board[d][d],int n)
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
void printq(queue<int> row)
{
  while(!row.empty())
  {
      cout<<setw(3)<<row.front()<<" ";
      row.pop();
  }
}
int find_min(int board[d][d],int a,int b,int n)
{
    int choicex[8]={+a,+b,-b,-a,-a,-b,+b,+a};
    int choicey[8]={+b,+a,+a,+b,-b,-a,-a,-b};
    int min=1000;
    queue<int> row;
    queue<int> col;
    queue<int> lev;
    row.push(0);
    col.push(0);
    lev.push(0);
    while(!row.empty())
    {
        int curx=row.front();
        int cury=col.front();
        int curl=lev.front();
        row.pop();
        col.pop();
        lev.pop();
        for(int i=0;i<8;i++)
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
                if(newx==(n-1)&&newy==(n-1))
                {
                    return newl;
                }
            }      
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a,b;   
    cin>>a>>b; 
    memset(board,-1,sizeof(board));
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            memset(board,-1,sizeof(board));
            board[0][0]=0;
            int min=find_min(board,i,j,n);
            cout<<min<<" ";
        }
        cout<<"\n";
    }
}
