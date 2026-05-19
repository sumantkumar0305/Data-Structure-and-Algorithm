// Leetcode
// 2343. Query Kth Smallest Trimmed Number -> Med.

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums,
                                       vector<vector<int>>& queries) {

        vector<int> ans;

        int size = nums[0].length();

        for (auto it : queries) {

            int k = it[0];
            int trim = it[1];

            vector<pair<string, int>> vec;

            int st = size - trim;

            for (int i = 0; i < nums.size(); i++) {

                string sub = nums[i].substr(st, trim);

                vec.push_back({sub, i});
            }

            sort(vec.begin(), vec.end());

            ans.push_back(vec[k - 1].second);
        }

        return ans;
    }
};
