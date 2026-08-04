// Leetcode
// 155. Min Stack -> Med.

class MinStack {
    stack<int>st;
    map<int, int>un;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        un[value]++;
    }
    
    void pop() {
        int t = st.top();
        st.pop();
        un[t]--;
        if(un[t] == 0){
            un.erase(t);
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int firstKey = un.begin()->first;
        return firstKey;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
