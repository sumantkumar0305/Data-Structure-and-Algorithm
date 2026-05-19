// Leetcode
// 1584. Min Cost to Connect All Points -> Med

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int v = points.size();
        vector<bool>visit(v, false);
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        int ans = 0;
        
        pq.push({0, 0});

        while(pq.size() > 0){
            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();

            if(!visit[u]){
                visit[u] = true;
                ans += cost;

                int a = points[u][0]; //a
                int b = points[u][1]; //b

                for(int i = 0; i < v; i++){
                    if(!visit[i]){
                        int c = points[i][0];
                        int d = points[i][1];

                        int sum = abs(a-c)+abs(b-d);

                        pq.push({sum, i});
                    }
                }
            }
        }

        return ans;
    }
};
