class Solution {
private:
    void dfs(int r, int c, vector<vector<char>> &grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        if(r>=rows || r<0 || c>=cols || c<0) return;

        if(grid[r][c]=='0')
        {
            return;
        }

        grid[r][c] = '0';
        dfs(r-1,c,grid);
        dfs(r+1,c,grid);
        dfs(r,c-1,grid);
        dfs(r,c+1,grid);
        return;


    }




public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int counter = 0;
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    counter++;
                    dfs(i,j,grid);
                }
            }
        }
        return counter;
        
    }
};