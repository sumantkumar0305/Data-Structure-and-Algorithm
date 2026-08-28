// Leetcode
// 3280. Convert Date to Binary -> Easy

class Solution {
    string intToBinary(int val){
        string ans = "";

        while(val > 0){
            int rem = val%2;
            ans += to_string(rem);
            val /= 2;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
public:
    string convertDateToBinary(string date) {
        string year = "";
        year += date[0];
        year += date[1];
        year += date[2];
        year += date[3];

        int ye = stoi(year);

        string month = "";
        month += date[5];
        month += date[6];

        int mo = stoi(month);

        string data = "";
        data += date[8];
        data += date[9];
        int d = stoi(data);
        
        string ans = intToBinary(ye)+"-"+intToBinary(mo)+"-"+intToBinary(d);
        return ans;
    }
};
