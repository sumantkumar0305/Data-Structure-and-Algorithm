// Leetcode
// 2657. Find the Prefix Common Array of Two Arrays -> Med.

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;

        for(int i = 0; i < A.size(); i++){
            unordered_map<int, int>un;
            for(int j = i; j >= 0; j--){
                un[A[j]]++;
                un[B[j]]++;
            }

            int count = 0;
            for(auto it : un){
                if(it.second == 2)count++;
            }
            ans.push_back(count);
        }

        return ans;
    }
};
