// Leetcode
// 599. Minimum Index Sum of Two Lists -> Easy

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<int, vector<string>>un;

        for(int i = 0; i < list1.size(); i++){
            for(int j = 0; j < list2.size(); j++){
                if(list1[i] == list2[j]){
                    un[i+j].push_back(list1[i]);
                }
            }
        }

        for(auto it : un){
            return it.second;
        }

        return {};
    }
};
