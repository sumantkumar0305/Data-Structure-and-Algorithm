// Leetcode
// 1769. Minimum Number of Operations to Move All Balls to Each Box -> Med.

class Solution {
    int check(int idx, string n){
        int ans = 0;
        
        for(int i = 0; i < n.length(); i++){
            if(n[i] != '0'){
                ans += abs(idx-i);
            }
        }

        return ans;
    }
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;

        for(int i = 0; i < boxes.length(); i++){
            ans.push_back(check(i, boxes));
        }

        return ans;
    }
};
