// Leetcode
// 733. Flood Fill -> Easy

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int, int>>q;
        int fir = image[sr][sc];
        if (fir == color) return image; 

        q.push({sr, sc});
        image[sr][sc] = color;

        while(q.size() > 0){
            auto it = q.front();
            q.pop();

            if(it.first-1 >= 0 && image[it.first-1][it.second] == fir){
                image[it.first-1][it.second] = color;
                q.push({it.first-1, it.second});
            }

            if(it.first+1 < image.size() && image[it.first+1][it.second] == fir){
                image[it.first+1][it.second] = color;
                q.push({it.first+1, it.second});
            }

            if(it.second-1 >= 0 && image[it.first][it.second-1] == fir){
                image[it.first][it.second-1] = color;
                q.push({it.first, it.second-1});
            }

            if(it.second+1 < image[0].size() && image[it.first][it.second+1] == fir){
                image[it.first][it.second+1] = color;
                q.push({it.first, it.second+1});
            }
        }

        return image;
    }
};
