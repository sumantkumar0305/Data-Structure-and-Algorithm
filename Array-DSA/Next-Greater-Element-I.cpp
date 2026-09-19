// Leetcode
// 496. Next Greater Element I -> Easy

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>un;
        stack<int>st;
        int n = nums2.size()-1;
        st.push(nums2[n--]);
        un[nums2[n+1]] = -1;

        while(n >= 0){
            while(!st.empty() && st.top() < nums2[n]){
                st.pop();
            }

            if(st.empty()){
                un[nums2[n]] = -1;
            }else{
                un[nums2[n]] = st.top();
            }
            st.push(nums2[n]);
            n--;
        }

        vector<int>ans;
        for(auto it : nums1){
            ans.push_back(un[it]);
        }

        return ans;
    }
};
