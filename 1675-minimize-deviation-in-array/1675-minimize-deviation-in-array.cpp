class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int m=INT_MAX,maxi=INT_MAX;
        for(auto it:nums)
        {
            if(it%2!=0)
                it*=2;
            m=min(it,m);
            pq.push(it);
           
                
        }
        while(pq.top()%2==0)
        {
            int ele=pq.top();
            pq.pop();
            
            maxi=min(maxi,ele-m);
            pq.push(ele/2);
            m=min(ele/2,m);
        }
        return min(pq.top()-m,maxi);
    }
};