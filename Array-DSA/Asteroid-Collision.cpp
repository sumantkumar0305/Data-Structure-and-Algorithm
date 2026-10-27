// Leetcode
// 735. Asteroid Collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;

        for(auto it : asteroids){
            if(it > 0){
                st.push(it);
            }else{
                bool isCheck = true;
                while(!st.empty()){
                    if(st.top() < 0)break;
                    if(st.top() > abs(it)){
                        isCheck = false;
                        break;
                    }else if(st.top() == abs(it)){
                        isCheck = false;
                        st.pop();
                        break;
                    }else{
                        isCheck = true;
                        st.pop();
                    }
                }

                if(isCheck)st.push(it);
            }
        }

        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
