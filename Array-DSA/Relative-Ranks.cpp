// Leetcode
// 506. Relative Ranks -> Easy

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = score;
        
        sort(sorted.rbegin(), sorted.rend());

        unordered_map<int, int> rank;

        for (int i = 0; i < sorted.size(); i++) {
            rank[sorted[i]] = i + 1;
        }

        vector<string> answer;

        for (int x : score) {
            int r = rank[x];

            if (r == 1)
                answer.push_back("Gold Medal");
            else if (r == 2)
                answer.push_back("Silver Medal");
            else if (r == 3)
                answer.push_back("Bronze Medal");
            else
                answer.push_back(to_string(r));
        }

        return answer;

    }
};
