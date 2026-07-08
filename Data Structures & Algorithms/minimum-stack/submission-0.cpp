class MinStack {
    stack<int> mainstack ; 
    stack<int> minstack ; 
public:
    MinStack() {
        
    }
    
    void push(int val) {
        mainstack.push(val) ; 
        if(minstack.empty())
        {
            minstack.push(min(mainstack.top() , val));
        }
    }
    
    void pop() {
        mainstack.pop();
        minstsack.pop();
    }
    
    int top() {
        return mainstack.top();
    }
    
    int getMin() {
        return minstack.top(); 
    }
};
