// LeetCode
// 733. Flood Fill -> Easy

class Solution {
    void bfs(int n, int m, vector<vector<int>>& image, int st, int i, int j, int color) {
        queue<pair<int,int>> q;
        q.push({i, j});

        image[i][j] = color;

        while(!q.empty()) {
            int fir = q.front().first;
            int sec = q.front().second;
            q.pop();

            if(fir-1 >= 0 && image[fir-1][sec] == st) {
                image[fir-1][sec] = color;   
                q.push({fir-1, sec});
            }
            if(fir+1 < n && image[fir+1][sec] == st) {
                image[fir+1][sec] = color;
                q.push({fir+1, sec});
            }
            if(sec-1 >= 0 && image[fir][sec-1] == st) {
                image[fir][sec-1] = color;
                q.push({fir, sec-1});
            }
            if(sec+1 < m && image[fir][sec+1] == st) {
                image[fir][sec+1] = color;
                q.push({fir, sec+1});
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        int st = image[sr][sc];

        if(st == color) return image;

        bfs(n, m, image, st, sr, sc, color);

        return image;
    }
};
