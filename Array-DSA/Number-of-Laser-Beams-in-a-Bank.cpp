// Leetcode
// 2125. Number of Laser Beams in a Bank -> Med.

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if(bank.size() == 1) return 0;
        vector<int>temp;

        for(auto it : bank){
            int count = 0;
            for(auto i : it){
                if(i == '1') count++;
            }

            if(count != 0) temp.push_back(count);
        }

        int ans = 0;
        if(temp.size() == 0) return ans;
        for(int i = 0; i < temp.size()-1; i++){
            ans += (temp[i]*temp[i+1]);
        }

        return ans;
    }
};
