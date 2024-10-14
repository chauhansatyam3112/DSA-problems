class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        priority_queue<int>pq(nums.begin(),nums.end());
        
        long long sum=0;
        
        while(k--)
        {
            sum+=pq.top();
            
            int maxi=pq.top();
            
            pq.push(ceil(maxi/3.0));
            
            pq.pop();
              
        }
        
        return sum;
        
    }
};