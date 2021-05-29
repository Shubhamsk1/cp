#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);\

string s[9];
bool isValid(int row,int col){
    return row<=8&&col<=8&&row>=0&&col>=0&&s[row][col]!='X';
}

void modifyBoard(int row,int col,int k,int obstaclecount){
    
    static int choicer[]={-1,-1,0,1,1,1,0,-1};
    static int choicec[]={0,1,1,1,0,-1,-1,-1};

    for(int i=0;i<8;i++){
        int newrow=row+choicer[i];
        int newcol=col+choicec[i];
        if(isValid(newrow,newcol)&&k<=8){ 
            if(k!=0)
            {
                s[newrow][newcol]='X';
                k--;
            }
            else
            {
                break;
            }
            

        }


    }

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int k;cin>>k;
        for(int i=1;i<=8;i++){
            s[i]="........";
        }
        s[4][4]='O';
        modifyBoard(4,4,k,0);
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++)
                cout<<s[i][j];
            cout<<"\n";
        }

    }
}