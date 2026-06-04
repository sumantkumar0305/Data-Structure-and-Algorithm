// Leetcode
// 3751. Total Waviness of Numbers in Range I -> Med.

class Solution {
    int peak(int num1){
        int ans = 0;
        vector<int>temp;

        while(num1 > 0){
            temp.push_back(num1%10);
            num1 /= 10;
        }
        
        int st = 0;
        int mid = st+1;
        int end = mid+1;

        while(end < temp.size()){
            if(temp[mid] > temp[end] && temp[mid] > temp[st]) ans++;
            st++;
            mid = st+1;
            end = mid+1;
        }

        return ans;
    }

    int below(int num1){
        int ans = 0;
        vector<int>temp;

        while(num1 > 0){
            temp.push_back(num1%10);
            num1 /= 10;
        }
        
        int st = 0;
        int mid = st+1;
        int end = mid+1;

        while(end < temp.size()){
            if(temp[mid] < temp[st] && temp[mid] < temp[end]) ans++;
            st++;
            mid = st+1;
            end = mid+1;
        }

        return ans;
    }
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i <= num2; i++){
            ans += peak(i);
            ans += below(i);
        }       

        return ans;
    }
};
