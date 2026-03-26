bool isCycle(vector<vector<int>>&graph, vector<int>visit, int par, int val){
    visit[val] = true;

    vector<int>neigh = graph[val];
    for(auto it : neigh){
        if(!visit[it]){
            if (isCycle(graph, visit, val, it)){
                return true;
            }
        }else{
            if(it != par){
                return true;
            }
        }
    }

    return false;
}
