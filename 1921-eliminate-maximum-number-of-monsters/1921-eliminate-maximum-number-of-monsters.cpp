class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
         
        int ans = 0;
        
        priority_queue<double, vector<double>, greater<double>>pq;
        
         int time = 0;
        
        
        for(int i = 0; i<dist.size(); i++){
            
            pq.push(ceil((double)dist[i]/speed[i]));
        }
        
       
        
        while(!pq.empty()){
            
            if(time<pq.top()){
                
                pq.pop();
                
                ans++;
            }
            else return ans;
            
             time++;
        }
        return ans;
    }
};