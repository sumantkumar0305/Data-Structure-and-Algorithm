// Leetcode
// 2392. Build a Matrix With Conditions -> Med.

class Solution {
    vector<int>topological(vector<vector<int>>&vec, int k){
        vector<vector<int>>graph(k);

        for(auto it : vec){
            int u = it[0]-1;
            int v = it[1]-1;
            
            graph[u].push_back(v);
        }

        queue<int>q;
        vector<int>indeg(k, 0);
        
        for(auto it : graph){
            for(auto i : it){
                indeg[i]++;
            }
        }

        for(int i = 0; i < k; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }

        if(q.size() <= 0) return {};
        vector<int>ans;

        while(q.size() > 0){
            int a = q.front();
            q.pop();

            //if(graph[a].size() > 0){
            ans.push_back(a);
           // }

            for(auto it : graph[a]){
                indeg[it]--;
                if(indeg[it] == 0){
                    q.push(it);
                }
            }
        }

        for(int i = 0; i < ans.size(); i++){
            ans[i]++;
        }

        if(ans.size() != k) return {};

        return ans;
    }
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int>row,col;

        row = topological(rowConditions, k);
        col = topological(colConditions, k);

        if(row.size() == 0 || col.size() == 0) return {};

        vector<vector<int>>ans(k, vector<int>(k, 0));

        for(int i = 0; i < k; i++){
            for(int j = 0; j < k; j++){
                if(row[i] == col[j]){
                    ans[i][j] = row[i];
                }
            }
        }

        return ans;
    }
};
