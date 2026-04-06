// LeetCode
// 399. Evaluate Division -> Med

class Solution {
        void addEdge(unordered_map<string, unordered_map<string, double>>& graph, string u, string v, double wt) {
        graph[u][v] = wt;
        graph[v][u] = 1.0 / wt; // add reverse edge
    }

    double BFS(unordered_map<string, unordered_map<string, double>>&g, string u, string des){
        int size = g.size();
        unordered_set<string>visited;
        queue<pair<string, double>>q;
        q.push({u, 1.0});
        
        visited.insert(u);

        while(q.size() > 0){
            string a = q.front().first;
            double ans = q.front().second;
            q.pop();
            if(g[a].count(des) > 0){
                return ans*g[a][des];
            }

            for(auto it : g[a]){
                if(visited.count(it.first) == 0){
                    visited.insert(it.first);
                    q.push({it.first, ans*it.second});
                }
            }
        }

        return -1.0;
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, unordered_map<string, double>> graph;

        for(int i = 0; i < values.size(); i++){
            string u = equations[i][0];
            string v = equations[i][1];
            double wt = values[i];

            if(graph[u].count(v) == 0){
                addEdge(graph, u, v, wt);
            }
        }

        vector<double>ans(queries.size());

        for(int i = 0; i < queries.size(); i++){
            string num = queries[i][0];
            string den = queries[i][1];

            if((graph.count(num) == 0) || (graph.count(den) == 0)) ans[i] = -1.0;
            else if(num == den) ans[i] = 1.0;
            else {
                ans[i] = BFS(graph, num, den);
            }
        }

        return ans;
    }
};
