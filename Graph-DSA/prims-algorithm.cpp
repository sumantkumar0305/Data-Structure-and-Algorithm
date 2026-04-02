//Prims Algorithm code using c++

vector<vector<pair<int,int>>> createGraph(vector<vector<int>>&edge, int node){
    vector<vector<pair<int, int>>>graph(node); //pair<int, int> child node and wt

    for(auto it : edge){
        graph[it[0]].push_back({it[1], it[2]});
        graph[it[1]].push_back({it[0], it[2]});
    }

    return graph;
}

int primsAlgorithm(int v, int src, vector<vector<int>>& edges){
    vector<vector<pair<int,int>>>graph = createGraph(edges, v);
    vector<bool>MSTSet(v, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;

    pq.push({0, src});

    int ans = 0;
    while(pq.size() > 0){
        int u = pq.top().second;
        int cost = pq.top().first;

        pq.pop();

        if(!MSTSet[u]){
            MSTSet[u] = true;
            ans += cost;

            for(auto it : graph[u]){
                if(!MSTSet[it.first]){
                    pq.push({it.second, it.first});
                }
            }
        }
    }

    return ans;
}
