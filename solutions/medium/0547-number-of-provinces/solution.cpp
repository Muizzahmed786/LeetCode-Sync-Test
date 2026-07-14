class Solution {
public:
    void dfs(int node, vector<vector<int>>& list, vector<int>& visited){
        visited[node] = 1;

        for(int i=0;i<list[node].size();i++){
            if(!visited[list[node][i]]){
                dfs(list[node][i], list, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> list(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1 && i != j){
                    list[i].push_back(j);
                    list[j].push_back(i);
                }
            }
        }

        vector<int> visited(n+1, 0);
        int count = 0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i, list, visited);
            }
        }

        return count;
    }
};