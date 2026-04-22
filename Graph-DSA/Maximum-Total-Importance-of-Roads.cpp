// LeetCode
// 2285. Maximum Total Importance of Roads -> Med

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>indeg(n, 0);
        
        for(auto it : roads){
            int u = it[0];
            int v = it[1];
            indeg[u]++;
            indeg[v]++;
        }

        priority_queue<pair<int, int>>pq;
        for(int i = 0; i < n; i++){
            pq.push({indeg[i], i});
        }

        int temp = n;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            indeg[it.second] = n;
            n--;
        }

        long long ans = 0;
        for(auto it : roads){
            int a = indeg[it[0]];
            int b = indeg[it[1]];

            ans += (a+b);
        }

        return ans;
    }
};
