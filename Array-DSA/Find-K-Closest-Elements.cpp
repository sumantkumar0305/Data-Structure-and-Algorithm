// LeetCode
// 658. Find K Closest Elements -> Med

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        if(arr.size() == 0) return ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        
        for(auto it : arr){
            pq.push({abs(it-x), it});
        }

        int i = 0;
        while(i < k && !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
            i++;
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
