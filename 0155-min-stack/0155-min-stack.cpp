class MinStack {
public:
    stack<int>st;int min=INT_MAX;
    stack<int>minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        
        
        
        // if(st.empty())
        //     st.push(val);
      //  min=val;
        // else if(val>=min)
        //     st.push(val);
        // else
        //     st.push(2*val-min);
      st.push(val);
	    if(minStack.empty() || val<=minStack.top()) minStack.push(val);	    
    
    }
    
    void pop() {
        // if(st.empty())
        //     return ;
        // else if(st.top()>=min)
        //     st.pop();
        // else{
        //     min=2*min-st.top();
        // st.pop();}
        if(minStack.top()==st.top())
            minStack.pop();
        st.pop();
        
        
        
    }
    
    int top() {
    return st.top();
       
        
    }
    
    int getMin() {
        return minStack.top() ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */