// Leetcode
// 989. Add to Array-Form of Integer -> Easy

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>temp;

        while(k > 0){
            temp.push_back(k%10);
            k /= 10;
        }

        reverse(num.begin(), num.end());
        int c = 0;

        int i = 0;
        vector<int>ans;
        while(i < num.size() && i < temp.size()){
            int sum = num[i]+temp[i]+c;
            c = sum/10;
            ans.push_back(sum%10);

            i++;
        }

        if(i < temp.size()){
            for(int j = i; j < temp.size(); j++){
                int sum = c+temp[j];
                c = sum/10;
                ans.push_back(sum%10);
            }
        }

        if(i < num.size()){
            for(int j = i; j < num.size(); j++){
                int sum = c + num[j];
                c = sum/10;
                ans.push_back(sum%10);
            }
        }

        if(c != 0){
            ans.push_back(c);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
