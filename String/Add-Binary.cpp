// Leetcode
// 67. Add Binary -> Easy

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";

        int i = a.length()-1, j = b.length()-1;
        int c = 0;
        while(i >= 0 && j >= 0){
            int sum = (a[i]-'0')+(b[j]-'0')+c;

            c = sum/2;
            ans += char((sum % 2) + '0');
            i--;
            j--;
        }

        if(i >= 0){
            for(int k = i; k >= 0; k--){
                int sum = c+(a[k]-'0');
                c = sum/2;
                ans += char((sum % 2) + '0');
            }
        }

        if(j >= 0){
            for(int k = j; k >= 0; k--){
                int sum = c+(b[k]-'0');

                c = sum/2;
                ans += char((sum % 2) + '0');
            }
        }

        if(c != 0){
            ans += char(c+'0');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
