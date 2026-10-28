// Leetcode
// 349. Intersection of Two Arrays -> Easy

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>un;

        for(auto it : nums1){
            un.insert(it);
        }
        unordered_set<int>temp;
        for(auto it : nums2){
            if(un.count(it))temp.insert(it);
        }

        return vector(temp.begin(), temp.end());
    }
};
