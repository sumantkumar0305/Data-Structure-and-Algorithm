// Leetcode
// 315. Count of Smaller Numbers After Self -> Hard

class Solution {
public:
    void mergeSort(vector<pair<int,int>>& arr, vector<int>& ans, int left, int right) {

        if(left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(arr, ans, left, mid);
        mergeSort(arr, ans, mid + 1, right);

        vector<pair<int,int>> temp;

        int i = left;
        int j = mid + 1;

        int rightCount = 0;

        while(i <= mid && j <= right) {

            if(arr[j].first < arr[i].first) {

                temp.push_back(arr[j]);
                rightCount++;
                j++;

            } else {

                ans[arr[i].second] += rightCount;
                temp.push_back(arr[i]);
                i++;
            }
        }

        while(i <= mid) {

            ans[arr[i].second] += rightCount;
            temp.push_back(arr[i]);
            i++;
        }

        while(j <= right) {

            temp.push_back(arr[j]);
            j++;
        }

        for(int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }
    }

    vector<int> countSmaller(vector<int>& nums) {

        int n = nums.size();

        vector<pair<int,int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        vector<int> ans(n, 0);

        mergeSort(arr, ans, 0, n - 1);

        return ans;
    }

};
