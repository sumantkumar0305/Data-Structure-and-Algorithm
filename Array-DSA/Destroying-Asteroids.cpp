// Leetcode
// 2126. Destroying Asteroids -> Med.

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& as) {
        sort(as.begin(), as.end());

        long long m = mass;

        for(auto it : as){
            if(m < it) return false;

            m += it;
        }

        return true;
    }
};
