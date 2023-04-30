class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>&A) {
    
//           priority_queue<int,vector<int>,greater<int>>p;
//         deque<int>dq;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             p.push(nums[i]);
//             dq.push_back(nums[i]);
//         }
//         int ans=0;
//         while(!p.empty() ){
            
//            // int ans=0;
        
//         if(p.top()==dq.front()){
//             p.pop();
//            dq.pop_front();}
//         else{
//             int temp=dq.front();
//             dq.pop_front();
//             dq.push_back(temp);
//         }
//             ans++;
            
//         }
//         return ans;
        unordered_map<int,int>mp;
        int n=A.size();
        long long res=n;
        for(int i=0;i<A.size();i++)
        {
            mp[A[i]]=i;
        }
        sort(A.begin(),A.end());
        
        for(int i=1;i<A.size();i++)
        {
            if(mp[A[i]]<mp[A[i-1]])
                res+=(n-i);
            
        }
        return res;
        
        
    }
    
};