#include<bits/stdc++.h>
using namespace std;
#define N 4
bool solveNQUtil(int board[N][N],int col){
    if(col==N){
        printSolution(board);
        return true;
    }
    for(int i=0;i<N;i++)
    {
        if(isSafe(board,i,col)){
            board[i][col]=1;
            if(solveNQUtil(board,col+1)){
                return true;
            }
            board[i][col]=0;
        }
    }
}


int main(){
    solveNQ();
    return 0;
}