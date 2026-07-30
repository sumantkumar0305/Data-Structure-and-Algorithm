// Leetcode
// 482. License Key Formatting -> Easy

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans = "";
        int i = s.length()-1;

        while(i >= 0){
            int j = i;
            int count = 0;
            if(i < k) break;
            while(count < k && j >= 0){
                if(s[j] == '-'){
                    j--;
                    continue;
                }
                else if(int(s[j]) >= 97 && int(s[j]) <= 122){
                    ans += char(s[j]-32);
                    count++;
                }else{
                    ans += s[j];
                    count++;
                }
                j--;
            }

            i = j;
            ans += '-';
        }

        while(i >= 0){
            if(s[i] == '-'){
                i--;
                continue;
            }
            else if(int(s[i]) >= 97 && int(s[i]) <= 122){
                ans += char(s[i]-32);
            }else{
                ans += s[i];
            }
            i--;
        }

        int l = ans.length()-1;
        while(l >= 0 && ans[l] == '-'){
            l--;
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
