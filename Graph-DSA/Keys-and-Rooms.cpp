// LeeCode
// 841. Keys and Rooms -> Med

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int>q;
        vector<int>visit(n, false);
        q.push(0);
        visit[0] = true;

        while(q.size() > 0){
            int curr = q.front();
            q.pop();

            for(auto it : rooms[curr]){
                if(!visit[it]){
                    q.push(it);
                    visit[it] = true;
                }
            }
        }

        for(auto i : visit){
            if(!i) return false;
        }
        return true;
    }
};
