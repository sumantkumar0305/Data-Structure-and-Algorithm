// Leetcode
// 1095. Find in Mountain Array -> Hard

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        MountainArray m = mountainArr;
        
        for(int i = 0; i < n; i++){
            if(m.get(i) == target)return i;
        }
        return -1;
    }
};
