// Leetcode
// 877. Stone Game -> Med.

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int sumA = 0, sumB = 0;
        int i = 0;
        
        while(piles.size() > 0){
            int a = piles[0];
            int b = piles[1];
            if(i%2 == 0){
                if(a > b){
                    sumA += a;
                    piles.erase(piles.begin());
                }else{
                    sumA += b;
                    piles.pop_back();
                }
            }else{
                if(a < b){
                    sumA += a;
                    piles.erase(piles.begin());
                }else{
                    sumA += b;
                    piles.pop_back();
                }
            }
        }

        return sumA >= sumB;
    }
};
