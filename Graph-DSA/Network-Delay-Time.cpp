// LeetCode
// 743. Network Delay Time -> Med

class Solution {
    vector<vector<pair<int,int>>> createGraph(vector<vector<int>>&edge, int node){
        vector<vector<pair<int, int>>>graph(node); //pair<int, int> child node and wt
    
        for(auto it : edge){
            graph[it[0]-1].push_back({it[1]-1, it[2]});
        }
    
        return graph;
    }
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>graph = createGraph(times, n);

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>ans(n, INT_MAX);

        ans[k-1] = 0;
        pq.push({0, k-1});

        while(pq.size() > 0){
            int u = pq.top().second;
            int dist = pq.top().first;

            pq.pop();
            if(dist > ans[u]) continue;

            for(auto it : graph[u]){
                if(ans[it.first] > ans[u]+it.second){
                    ans[it.first] = ans[u]+it.second;
                    pq.push({ans[it.first], it.first});
                }
            }
        }

        int temp = 0;
        for(auto it : ans){
            if(it == INT_MAX) return -1;
            temp = max(temp, it);
        }

        return temp;
    }
};
