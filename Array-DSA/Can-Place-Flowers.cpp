// Leetcode
// 605. Can Place Flowers -> Easy

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)return true;
        int ans = 0;
        if(flowerbed.size() == 1){
            if(n > 1)return false;
            if(flowerbed[0] == 0){
                return true;
            }

            return false;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            ans++;
            flowerbed[0] = 1;
        }

        for(int i = 1; i < flowerbed.size()-1; i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                ans++;
                flowerbed[i] = 1;
            }
        }

        if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0){
            ans++;
        }

        return ans >= n;
    }
};
