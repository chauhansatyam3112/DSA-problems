class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
            
            sort(nums.rbegin(),nums.rend());
            
            int cnt=0;
            
            long long sum=0;
            
            for(int i=0;i<nums.size() && k-- ;i++)
            {
                    if(nums[i]-cnt>0)
                    sum+=(nums[i]-cnt);
                    cnt++;
            }
            
            
        
//             priority_queue<int>pq;
            
//             for(int i=0;i<nums.size();i++)
//             {
//                     pq.push(nums[i]);
//             }
            
//             long long sum=0;
            
           
//             int cnt=0;
            
          
//            while(k>0)
//            {
//                   if(!pq.empty())
//                   {
//                           sum+=pq.top();
//                           pq.pop();
                          
                         
//                   }
                   
//                   vector<int>temp;
                   
//                   while(!pq.empty()) 
//                   {
//                           int x=pq.top();
//                           pq.pop();
                          
//                           x=x-1;
                          
//                           if(x>0)
//                           {
//                                   temp.push_back(x);
//                           }
//                   }
                   
//                   for(auto it:temp)pq.push(it); 
                  
//                   k--; 
//            }
            
            return sum;
            
           
    }
};