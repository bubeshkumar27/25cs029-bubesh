#include <bits/stdc++.h>
using namespace std;

int main(){
    int R,C;
    cin>>R>>C;

    int grid[R][C];
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            cin>>grid[row][col];
        }
    }

    int row,col;
    cin>>row>>col;

    int diff[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    int sum = 0;

    for(int i=0;i<8;i++){
        int adjrow = row + diff[i][0];
        int adjcol = col + diff[i][1];

        if(adjrow >= 0 && adjrow < R && adjcol >= 0 && adjcol < C){
            sum += grid[adjrow][adjcol];
        }
    }

    cout<<sum<<endl;
    return 0;
}
