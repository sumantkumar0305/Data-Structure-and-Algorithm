// Leetcode
// 1684. Count the Number of Consistent Strings -> Easy

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
    
        for(auto it : words){
            int count = 0;
            for(auto i : it){
                int a = allowed.find(i);

                if (a != std::string::npos) {
                    count++;
                }else break;
            }
            if(count == it.length()) ans++;
        }

        return ans;
    }
};
