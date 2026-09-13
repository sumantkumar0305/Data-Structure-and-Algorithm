// Leetcode
// 835. Image Overlap -> Med.

class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>>a, b;

        for(int i = 0; i < img1.size(); i++){
            for(int j = 0; j < img1.size(); j++){
                if(img1[i][j] == 1)a.push_back({i, j});
                if(img2[i][j] == 1)b.push_back({i, j});
            }
        }

        unordered_map<string, int>un;
        for(auto it : a){
            for(auto i : b){
                int x = i.first-it.first+n;
                int y = i.second-it.second+n;
                string str = "";
                str += to_string(x);
                str += to_string(y);
                un[str]++;
            }
        }

        int maxVal = 0;
        for(auto it : un){
            maxVal = max(it.second, maxVal);
        }
        return maxVal;
    }
};
