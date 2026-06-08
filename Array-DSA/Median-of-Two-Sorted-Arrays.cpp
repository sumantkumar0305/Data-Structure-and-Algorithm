// Leetcode
// 4. Median of Two Sorted Arrays -> Hard

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>comb;
        
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                comb.push_back(nums1[i]);
                i++;
            }else{
                comb.push_back(nums2[j]);
                j++;
            }
        }

        if(i < nums1.size()){
            for(int k = i; k < nums1.size(); k++){
                comb.push_back(nums1[k]);
            }
        }

        if(j < nums2.size()){
            for(int k = j; k < nums2.size(); k++){
                comb.push_back(nums2[k]);
            }
        }

        int n = comb.size();
        int f = n/2;
        if(n % 2 == 0){
            int a = comb[f];
            int b = comb[f-1];

            return 1.0*(a+b)/2;
        }

        return 1.0*comb[f];
    }
};
