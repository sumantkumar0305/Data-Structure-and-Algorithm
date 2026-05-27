// Leetcode
// 2129. Capitalize the Title -> Easy

class Solution {
public:
    string capitalizeTitle(string title) {
        for(int i = 0; i < title.length(); i++){
            if(title[i] >= 'A' && title[i] <= 'Z'){
                title[i] = title[i] + 32;
            }
        }

        int i = 0;

        while(i < title.length()){

            int start = i;
            int len = 0;

            while(i < title.length() && title[i] != ' '){
                i++;
                len++;
            }

            if(len > 2){
                if(title[start] >= 'a' && title[start] <= 'z'){
                    title[start] = title[start] - 32;
                }
            }

            i++;
        }

        return title;
    }
};
