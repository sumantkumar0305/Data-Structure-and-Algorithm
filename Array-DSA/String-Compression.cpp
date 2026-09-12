// Leetcode
// 443. String Compression -> Med.

class Solution {
    void push(int a, vector<char>&str){
        if(a == 1)return;
        string b = to_string(a);
        for(auto it : b){
            str.push_back(it);
        }
    }
public:
    int compress(vector<char>& chars) {
        vector<char>str;

        int i = 0;
        while(i < chars.size()){
            int count = 1;
            char ch = chars[i];
            int j = i+1;
            while(j < chars.size() && chars[j] == ch){
                j++;
                count++;
            }
            str.push_back(ch);
            push(count, str);
            i = j;
        }

        chars = str;
        return chars.size();
    }
};
