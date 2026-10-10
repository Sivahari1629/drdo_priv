class Solution {
public:
 void dfs(int node , vector<vector<int>>&adjlist, vector<int>&vis)
        {
            vis[node]=1;
            for(auto it:adjlist[node])
            {
                if(vis[it]==0)
                {
                    dfs(it,adjlist,vis);
                }
            }
        }
    int findCircleNum(vector<vector<int>>& isConnected) {

       int n=isConnected.size();
       
        vector<vector<int>>LS(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j&&isConnected[i][j]==1)
                {
                    LS[i].push_back(j);
                    LS[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                count++;
                dfs(i,LS,vis);
            }
        }
        return count;
        
    }
};