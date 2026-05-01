class Solution {
private:
    void dfs(int index,vector<vector<int>> &adj,vector<int> &vis)
    {
    vis[index]=1;
    for(auto &it:adj[index])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis);
        }
    }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector <vector<int>> adj(v);
        int provinces = 0;
        vector<int>vis(v,0);
        for(int i= 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if(isConnected[i][j] && i!=j)
                {
                    adj[i].push_back(j);
                }
            }
        }
        for (int i = 0; i < v;i++)
        {
            if(!vis[i])
            {
                provinces++;
                dfs(i,adj,vis);            
            }
        }
        return provinces;

        
    }
};