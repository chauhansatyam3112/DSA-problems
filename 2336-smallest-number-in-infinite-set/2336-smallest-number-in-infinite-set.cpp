class SmallestInfiniteSet {
public:
     priority_queue<int,vector<int>,greater<int>>pq;
    vector<bool>visited;
    SmallestInfiniteSet() {
       
         for(int i=1;i<=1000;i++)
         {
             pq.push(i);
         }
       visited= vector<bool>(1001,true);
    }
   // vector<int>v;
   
    int popSmallest() {
       int   p=pq.top();
        
        pq.pop();
        visited[p]=false;
        
        return p;
    }
    
    void addBack(int num) {
        if(visited[num]==false)
         pq.push(num);
        visited[num]=true;
        
        
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */