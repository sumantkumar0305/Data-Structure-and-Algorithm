// Leetcode
// 1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance -> Med.

class Solution {
    vector<vector<pair<int,int>>>create(vector<vector<int>>&edges, int n){
        vector<vector<pair<int,int>>>graph(n);

        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            graph[u].push_back({v,wt});
            graph[v].push_back({u,wt});
        }

        return graph;
    }

    int dijkstra(int n, int st, int thresold, vector<vector<int>>&edges){
        vector<vector<pair<int, int>>>graph = create(edges, n);
        vector<int>temp(n,  10004);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;

        temp[st] = 0;
        pq.push({0,st});
        
        while(pq.size() > 0){
            int u = pq.top().second;
            pq.pop();

            for(auto it : graph[u]){
                int v = it.first;
                int wt = it.second;

                if(temp[v] > wt+temp[u]){
                    temp[v] = wt+temp[u];
                    pq.push({temp[v], v});
                }
            }
        }

        int ans = 0;
        for(auto it : temp){
            if(it <= thresold){
                ans++;
            }
        }

        return ans;
    }

public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<int>ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = dijkstra(n, i, distanceThreshold, edges);
        }

        int m = INT_MAX;
        for(auto it : ans){
            m = min(it, m);
        }

        int a = -1;
        for(int i = 0; i < n; i++){
            if(ans[i] == m && a < i) a = i;
        }

        return a;
    }
};
