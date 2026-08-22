// Leetcode
// 3913. Sort Vowels by Frequency -> Med.

class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, int>un;
        vector<int>idx;

        for(int i = 0; i < s.length(); i++){
            char it = s[i];
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
                un[it]++;
                idx.push_back(i);
            }
        }

        vector<pair<char, int>>vec(un.begin(), un.end());

        sort(vec.begin(), vec.end(), [](const pair<char, int>&a, const pair<char, int>&b){
            return a.second < b.second;
        });

        for(auto it : idx){
            s[it] = vec[vec.size()-1].first;
            vec[vec.size()-1].second--;
            if(vec[vec.size()-1].second == 0){
                vec.pop_back();
            }
        }

        return s;
    }
};
