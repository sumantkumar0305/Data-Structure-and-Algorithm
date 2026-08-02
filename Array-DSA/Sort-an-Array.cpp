// Leetcode
// 912. Sort an Array -> Med.

class Solution {
    void merge(vector<int>&num, int l, int r, int mid){
        vector<int>num1;
        vector<int>num2;

        for(int i = l; i <= mid; i++){
            num1.push_back(num[i]);
        }

        for(int i = mid+1; i <= r; i++){
            num2.push_back(num[i]);
        }

        vector<int>ans;
        int i = 0, j = 0;
        while(i < num1.size() && j < num2.size()){
            if(num1[i] < num2[j]){
                ans.push_back(num1[i++]);
            }else{
                ans.push_back(num2[j++]);
            }
        }

        while(i < num1.size()){
            ans.push_back(num1[i++]);
        }

        while(j < num2.size()){
            ans.push_back(num2[j++]);
        }

        int m = 0;
        for(int k = l; k <= r; k++){
            num[k] = ans[m++];
        }
    }

    void mergeSort(vector<int>&num, int l, int r){
        if(l >= r) return;

        int mid = l + (r-l)/2;
        mergeSort(num, l, mid);
        mergeSort(num, mid+1, r);
        merge(num, l, r, mid);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);

        return nums;
    }
};
