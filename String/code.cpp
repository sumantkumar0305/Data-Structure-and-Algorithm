class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        string vowels = "aeiouAEIOU";
        bool hasVowel = false, hasConsonant = false;

        for (char ch : word) {
            if (!isalnum(ch)) return false;

            if (isalpha(ch)) {
                if (vowels.find(ch) != string::npos)
                    hasVowel = true;
                else
                    hasConsonant = true;
            }
        }

        return hasVowel && hasConsonant;
    }
};