// Leetcode
// 3517. Smallest Palindromic Rearrangement I -> Med.

class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>vec(26, 0);

        for(auto it : s){
            vec[it-'a']++;
        }

        string left = "", mid = "";

        for (int i = 0; i < 26; i++) {
            left += string(vec[i] / 2, 'a' + i);

            if (vec[i] % 2)
                mid = string(1, 'a' + i);
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left+mid+right;
    }
};
