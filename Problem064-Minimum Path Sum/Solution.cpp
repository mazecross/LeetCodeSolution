/*
 * @SEU(master);@ZZULI(bachelor)
 * author:CuiXuan
 * email:873059043@qq.com
 * If you find any errors, please let me know.
 * If you have any better solution, please let me know.
 *
 * Solution Using time 28ms
 */
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row,col;
        row = grid.size();
        col = grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==0 && j==0)continue;
                else if(i==0)grid[i][j]+=grid[i][j-1];
                else if(j==0)grid[i][j]+=grid[i-1][j];
                else grid[i][j]+=min(grid[i][j-1],grid[i-1][j]);
            }
        }
        return grid[row-1][col-1];
    }
private:
    int min(int a,int b){
        return a>b?b:a;
    }
};
