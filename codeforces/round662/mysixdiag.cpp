#include<bits/stdc++.h>
#define gridLength 5

using gridType=std::vector<std::vector<int>>;

namespace Orientation{
    int TR=2;
    int BR=1;
    int None=0;
}

int getEmptyElements(gridType &grid){
    int count =0;
    for(auto row:grid){
        for(auto element:row){
            if(element==Orientation::None)
                count++;
        }
    }
    return count;
}


bool canBeExtended(gridType &grid,int row,int column,int currentElement){
    if(getEmptyElements(grid)==9 && currentElement==Orientation::None){
        return false;
    }
    if(currentElement==Orientation::None){
        return true;
    }
    if(currentElement==Orientation::TR){
        if(row > 0 && grid[row-1][column]==Orientation::BR)
            return false;
        if(column > 0 && grid[row][column-1] == Orientation::BR)
            return false;
        if(row > 0 && column > 0 && grid[row-1][column-1]==Orientation::TR)
            return false;
    }
    
    if(currentElement == Orientation::BR){
        if(row >  0 && grid[row-1][column] == Orientation::TR)
            return false;
        if(column > 0 && grid[row][column-1] == Orientation::TR)
            return false;
        if(row > 0 && column <gridLength-1   &&  grid[row-1][column+1]==Orientation::BR){
            return false;
        }
    }
    return true;
}

bool extend(gridType&grid,int row ,int column){
    if(column==gridLength){
        column=0;
        row++;
    }
    if(row==gridLength){
        return true;
    }
    for(auto i=Orientation::TR;i>=Orientation::None;i--){
        if(canBeExtended(grid,row,column,i)){
                grid[row][column]=i;
                if(extend(grid,row,column+1)){
                    return true;
                }
                grid[row][column]=-1;
        }
    }
    return false;
}
void printSolution(gridType&grid){
    for(auto row:grid){
        for(auto element: row){
            std::cout<<element<<" ";
        }
        std::cout<<std::endl;
    }

}
int main(){
    gridType grid(5,std::vector<int>(5,-1));
    if(extend(grid,0,0))
        printSolution(grid);
    else{
        std::cout<<"No Solution";
        std::cout<<std::endl;
    }
    return 0;
}



