class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    SeatManager(int n) {
        
        for(int i=1;i<=n;i++)
        {
            pq.push(i);
        }
    }
    
    
    int reserve() {
        
        int top=pq.top();pq.pop();
        return top;
    }
    
    void unreserve(int p) {
        
       pq.push(p);
        return ;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */