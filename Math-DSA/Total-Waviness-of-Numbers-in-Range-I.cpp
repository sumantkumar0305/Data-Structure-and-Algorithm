// Leetcode
// 3751. Total Waviness of Numbers in Range I -> Med.

class Solution {
    int checkValley(int n){
        int count = 0;
        vector<int>temp;

        while(n > 0){
            int rem = n%10;
            temp.push_back(rem);
            n /= 10;
        }

        for(int i = 1; i < temp.size()-1; i++){
            if((temp[i] < temp[i-1]) && (temp[i] < temp[i+1])) count++;
        }

        return count;
    }

    int checkPeak(int n){
        int count = 0;
        vector<int>temp;

        while(n > 0){
            int rem = n%10;
            temp.push_back(rem);
            n /= 10;
        }

        for(int i = 1; i < temp.size()-1; i++){
            if((temp[i] > temp[i-1]) && (temp[i] > temp[i+1])) count++;
        }

        return count;
    }
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        
        for(int i = num1; i <= num2; i++){
            ans += checkPeak(i);
            ans += checkValley(i);
        }

        return ans;
    }
};
