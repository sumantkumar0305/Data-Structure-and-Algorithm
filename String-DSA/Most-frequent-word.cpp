//GFG
//Most frequent word in an array of strings -> Med


class Solution {
  public:
    // Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) {
        unordered_map<string, int> freq;
        unordered_map<string, int> firstIndex;
    
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
    
            // store first occurrence
            if(firstIndex.find(arr[i]) == firstIndex.end()){
                firstIndex[arr[i]] = i;
            }
        }
    
        string ans;
        int maxFreq = 0;
        int maxIndex = -1;
    
        for(int i = 0; i < n; i++){
            string word = arr[i];
    
            if(freq[word] > maxFreq ||
              (freq[word] == maxFreq && firstIndex[word] > maxIndex)){
    
                maxFreq = freq[word];
                maxIndex = firstIndex[word];
                ans = word;
            }
        }
    
        return ans;
    }
};
