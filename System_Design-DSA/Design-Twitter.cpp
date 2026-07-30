//Leetcode
// 355. Design Twitter -> Med.

class Twitter {
    int timestamp;
    unordered_map<int, vector<pair<int, int>>> twit;
    unordered_map<int, unordered_set<int>> follo;

public:
    Twitter() {
        timestamp = 0;
    }
    
    void postTweet(int userId, int tweetId) {
        twit[userId].push_back({timestamp++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> maxHeap;
        
        for (const auto& tweet : twit[userId]) {
            maxHeap.push(tweet);
        }
        
        for (int followeeId : follo[userId]) {
            for (const auto& tweet : twit[followeeId]) {
                maxHeap.push(tweet);
            }
        }
        
        vector<int> ans;
        while (!maxHeap.empty() && ans.size() < 10) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        if (followerId == followeeId) return;
        follo[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        follo[followerId].erase(followeeId);
    }
};


/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */