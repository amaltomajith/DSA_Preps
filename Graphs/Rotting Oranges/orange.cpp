class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int cols = grid[0].size();
        
        // Initializing the queue and visited array as seen in image_e307c0.png
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(row, vector<int>(cols, 0));
        
        int Fcount = 0; // Initial fresh count
        int count = 0;  // Count of fresh oranges that turn rotten
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0}); // Add initial rotten oranges to queue
                    vis[i][j] = 2;       // Mark as rotten in visited array
                } else {
                    vis[i][j] = 0;
                }
                if (grid[i][j] == 1) {
                    Fcount++;
                }
            }
        }

        int maxt = 0; // Resulting time
        // Direction arrays for Up, Right, Down, Left movement
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        while (!q.empty()) {
            int r = q.front().first.first;   // Current row
            int c = q.front().first.second;  // Current column
            int t = q.front().second;        // Current time
            
            maxt = max(maxt, t);             // Track maximum time elapsed
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];          // Next row
                int nc = c + dc[i];          // Next column

                // Boundary checks and validation for fresh oranges
                if (nr >= 0 && nc >= 0 && nr < row && nc < cols && 
                    vis[nr][nc] == 0 && grid[nr][nc] == 1) {
                    
                    q.push({{nr, nc}, t + 1}); // Push newly rotten orange with time + 1
                    vis[nr][nc] = 2;           // Mark it as rotten
                    count++;
                }
            }
        }

        // Final check: If all fresh oranges couldn't be reached, return -1
        if (count != Fcount) return -1;

        return maxt;
    }
};