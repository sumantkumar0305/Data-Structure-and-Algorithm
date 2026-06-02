// Leetcode
// 3633. Earliest Finish Time for Land and Water Rides I -> Easy

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;

        for (int i = 0; i < landStartTime.size(); i++) {
            for (int j = 0; j < waterStartTime.size(); j++) {

                int landEnd = landStartTime[i] + landDuration[i];
                int finish1 = max(landEnd, waterStartTime[j]) + waterDuration[j];

                int waterEnd = waterStartTime[j] + waterDuration[j];
                int finish2 = max(waterEnd, landStartTime[i]) + landDuration[i];

                ans = min(ans, min(finish1, finish2));
            }
        }

        return ans;
    }
};
