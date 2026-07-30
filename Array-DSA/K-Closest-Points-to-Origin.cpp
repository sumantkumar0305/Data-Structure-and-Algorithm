// Leetcode
// 973. K Closest Points to Origin -> Med.

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>>pq;

        for(int i = 0; i < points.size(); i++){
            double temp = pow(points[i][0], 2) + pow(points[i][1], 2);
            double dist = pow(temp, 0.5);

            pq.push({dist, i});
        }

        vector<vector<int>>ans;
        int i = 0;
        while(i < k && pq.size() > 0){
            auto it = pq.top();
            pq.pop();
            i++;
            
            ans.push_back(points[it.second]);
        }

        return ans;
    }
};
