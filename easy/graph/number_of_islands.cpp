class Solution {
public:

        void floodFill(int i, int j, int row, int column, vector<vector<char>>& grid, vector<vector<bool>> &visited) {
        if(i>=0 && i<row && j>=0 && j<column && !visited[i][j] && grid[i][j] == '1') {
            visited[i][j] = true;
            floodFill(i,j+1,row,column,grid,visited);
            floodFill(i,j-1,row,column,grid,visited);
            floodFill(i+1,j,row,column,grid,visited);
            floodFill(i-1,j,row,column,grid,visited);
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        if(grid.size() == 0) return 0;

        int row = grid.size();
        int column = grid[0].size();

        vector<bool> tmp(column,false);
        vector<vector<bool>> visited(row,tmp);
        int islands = 0;

        for(int i=0; i<row; i++) {
            for(int j=0; j<column; j++) {
                if(!visited[i][j] && grid[i][j] == '1'){
                    floodFill(i,j,row,column,grid,visited);
                    islands++;
                }
            }
        }

        return islands;
    }

}
