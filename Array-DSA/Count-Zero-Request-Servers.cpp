// Leetcode
// 2747. Count Zero Request Servers -> Med.

class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int m = queries.size();
        vector<pair<int, int>> sorted_queries(m);
        for (int i = 0; i < m; ++i) {
            sorted_queries[i] = {queries[i], i};
        }
        sort(sorted_queries.begin(), sorted_queries.end());
        
        vector<int> res(m);
        unordered_map<int, int> active;
        int left = 0, right = 0;
        int num_logs = logs.size();
        
        for (const auto& q_pair : sorted_queries) {
            int q = q_pair.first;
            int idx = q_pair.second;
            int lower = q - x;
            
            while (right < num_logs && logs[right][1] <= q) {
                active[logs[right][0]]++;
                right++;
            }
            
            while (left < num_logs && logs[left][1] < lower) {
                int sid = logs[left][0];
                active[sid]--;
                if (active[sid] == 0) {
                    active.erase(sid);
                }
                left++;
            }
            
            res[idx] = n - active.size();
        }
        
        return res;
    }
};
