// Leetcode
// 295. Find Median from Data Stream -> Hard

class MedianFinder {
    vector<int>nums;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        auto it = lower_bound(nums.begin(), nums.end(), num);
        nums.insert(it, num);
    }
    
    double findMedian() {
        int mid = (nums.size()-1)/2;
        if(nums.size()%2 != 0){
            return static_cast<double>(nums[mid]);
        }
        double ans = nums[mid]*1.00;
        ans += nums[mid+1];
        ans /= 2;

        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
