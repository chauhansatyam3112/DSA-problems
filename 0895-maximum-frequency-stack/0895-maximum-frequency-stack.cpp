class FreqStack {
public:
    priority_queue<vector<int>>pq;
    unordered_map<int,int>mp;
    int idx=0;
    
    FreqStack() {
        
    }
    
    void push(int val) {
        ++mp[val];
        pq.push({mp[val],idx++,val});
    }
    
    int pop() {
        auto  x=pq.top();
        pq.pop();
        --mp[x[2]];
        return x[2];
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */