// GFG
// Digits in N that Divide it -> Med.

class Solution {
    bool two(string str){
        int n = str[str.length()-1]-'0';

        return n%2 == 0;
    }

    bool three(int sum){
        return sum%3 == 0;
    }

    bool four(string str){
        if(str.length() < 3){
            int n = stoi(str);

            return n%4 == 0;
        }

        string temp = str.substr(str.length() - 2);
        int n = stoi(temp);

        return n%4 == 0;
    }

    bool five(string str){
        char last = str[str.length() - 1];
        return last == '5' || last == '0';
    }

    bool six(int sum, string str){
        return two(str) && three(sum);
    }

    bool seven(string s) {
        if (s.empty()) return false;

        long long remainder = 0;
        for (int i = 0; i < s.length(); ++i) {
            remainder = (remainder * 10 + (s[i] - '0')) % 7;
        }

        return remainder == 0;
    }

    bool eight(string str){
        if(str.length() < 4){
            int n = stoi(str);

            return n%8 == 0;
        }

        string temp = str.substr(str.length() - 3);
        int n = stoi(temp);

        return n%8 == 0;
    }

    bool nine(int sum){
        return sum%9 == 0;
    }
  public:
    int divisibleByDigits(string& s) {
        // code here
        int sum = 0;
        for(auto it : s){
            sum += (it-'0');
        }
        bool isTwo = two(s); bool isThree = three(sum); bool isFour = four(s); bool isFive = five(s);
        bool isSix = six(sum, s); bool isSeven = seven(s); bool isEight = eight(s);
        bool isNine = nine(sum);

        int ans = 0;
        for(auto it : s){
            if(it == '0')continue;
            else if(it == '1')ans++;
            else if(it == '2'){
                 if(isTwo)ans++;
             }else if(it == '3'){
                 if(isThree)ans++;
             }else if(it == '4'){
                 if(isFour)ans++;
             }else if(it == '5'){
                 if(isFive)ans++;
             }else if(it == '6'){
                 if(isSix)ans++;
             }else if(it == '7'){
                 if(isSeven)ans++;
             }else if(it == '8'){
                 if(isEight)ans++;
             }else if(it == '9'){
                 if(isNine)ans++;
             }
        }

        return ans;
    }
};
 
