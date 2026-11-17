// Leetcode
// 941. Valid Mountain Array -> Easy

class Solution {
    int idx_find(vector<int>&arr){
        for(int i = 1; i < arr.size()-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])return i;
        }

        return -1;
    }
    bool checkIncr(vector<int>&arr, int idx){
        for(int i = 0; i < idx; i++){
            if(arr[i] >= arr[i+1])return false;
        }

        return true;
    }

    bool checkDecr(vector<int>&arr, int idx){
        for(int i = idx; i < arr.size()-1; i++){
            if(arr[i] <= arr[i+1])return false;
        }

        return true;
    }
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
        int idx = idx_find(arr);
        if(idx == -1)return false;


        return checkIncr(arr, idx) && checkDecr(arr, idx);
    }
};
