// Leetcode
// 1670. Design Front Middle Back Queue -> Med.

class FrontMiddleBackQueue {
    vector<int>num;
public:
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        num.insert(num.begin(), val);
        // num.push_front(val);
    }
    
    void pushMiddle(int val) {
        int n = num.size();
        num.insert(num.begin()+n/2, val);
    }
    
    void pushBack(int val) {
        num.push_back(val);
    }
    
    int popFront() {
        if(num.size() == 0) return -1;
        int val = num[0];
        num.erase(num.begin());
        // num.pop_front();

        return val;
    }
    
    int popMiddle() {
        if(num.size() == 0) return -1;
        int n = (num.size()-1)/2;
        int val = num[n];
        num.erase(num.begin()+n);

        return val;
    }
    
    int popBack() {
        if(num.size() == 0) return -1;
        int val = num[num.size()-1];
        num.pop_back();

        return val;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
