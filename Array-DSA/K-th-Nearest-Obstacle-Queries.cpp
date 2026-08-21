// Leetcode
// 3275. K-th Nearest Obstacle Queries -> Med.

class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        vector<int>ans;
        priority_queue<int>pq;

        for(auto it : queries){
            int ob = abs(it[0]) + abs(it[1]);
            pq.push(ob);

            if (pq.size() > k) {
                pq.pop();
            }

            if(pq.size() < k){
                ans.push_back(-1);
            }else{
                ans.push_back(pq.top());
            }
        }

        return ans;
    }
};
