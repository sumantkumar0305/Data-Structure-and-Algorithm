// Leetcode
// 350. Intersection of Two Arrays II -> Easy

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>un;
        for(auto it : nums1){
            un[it]++;
        }

        vector<int>ans;
        for(auto it : nums2){
            if(un.count(it)){
                ans.push_back(it);
                un[it]--;
                if(un[it] == 0)un.erase(it);
            }
        }

        return ans;
    }
};
