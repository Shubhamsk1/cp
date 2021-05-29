#include<bits/stdc++.h>
#define  IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define int long long
#define N 1001
char s[N][N];
int moves;
bool visited[N][N];
bool reached_end=false;
int move_count=0;
int nodes_left_in_layer = 1;
int nodes_in_next_layer=0;
int dr[]={-1,+1,0,0};
int dc[]={0,0,-1,-1};
int dh,dw;
int h,w;
queue<int> rq;
queue<int> cq;

void explore_neighbours(int r,int c){
    int rr,cc;    
    for(int i=0;i<4;i++){
        rr=r+dr[i];
        cc=c+dc[i];
        if(rr<0 || cc > 0) continue;
        if(rr>=h||cc>=w) continue;

        if(visited[rr][cc]) continue;
        if(s[rr][cc]=='#') continue;
        rq.push(rr);
        cq.push(cc);
        visited[rr][cc]=true;
        nodes_in_next_layer++;
    }
}


void bfs(int sr, int sc, int er,int ec){
    
    rq.push(sr);
    rq.push(sc);
    visited[sr][sc]=true;
    while(!rq.empty()){
        int r=rq.front();
        int c=cq.front();
        rq.pop();
        cq.pop();
        if(r==dh && c==dw){
            reached_end=true;
            break;
        }
        explore_neighbours(r,c);
        nodes_left_in_layer--;
        if(nodes_left_in_layer==0){
            nodes_left_in_layer=nodes_in_next_layer;
            nodes_in_next_layer=0;
            moves++;    
        }
        if(reached_end)
            cout<<moves<<endl;
        else 
            cout<<-1<<endl;
    }

}




int32_t main(){
    cin>>h>>w;
    int ch,cw;
    cin>>ch>>cw;    
 
    cin>>dh>>dw;
    moves=0;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>s[i][j];
        }
    }
    

}