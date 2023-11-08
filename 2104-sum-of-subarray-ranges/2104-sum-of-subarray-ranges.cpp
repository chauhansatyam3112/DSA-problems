class Solution {
public:
    #define ll long long
    long long subArrayRanges(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int>minprev(n,-1),minnext(n,n),maxnext(n,n),maxprev(n,-1);
        
        stack<int>st1,st2,st3,st4;
        
        
        
        for(int i=0;i<n;i++)
        {
            while(!st1.empty() && nums[st1.top()]>=nums[i])st1.pop();
            
            if(!st1.empty()) minprev[i]=st1.top();
            
            st1.push(i);
        }
        
        
        
          for(int i=0;i<n;i++)
        {
            while(!st2.empty() && nums[st2.top()]<=nums[i])st2.pop();
            
            if(!st2.empty()) maxprev[i]=st2.top();
            st2.push(i);
        }
        
      
        
          for(int i=n-1;i>=0;i--)
        {
            while(!st3.empty() && nums[st3.top()]>nums[i]) st3.pop();
            
            if(!st3.empty()) minnext[i]=st3.top();
            st3.push(i);
        }
        
        
        
           for(int i=n-1;i>=0;i--)
        {
            while(!st4.empty() && nums[st4.top()]<nums[i])st4.pop();
            
            if(!st4.empty()) maxnext[i]=st4.top();
            st4.push(i);
        }
        
        ll ans=0;
        
        for(int i=0;i<n;i++)
        {
           ll minileft=i-minprev[i];
            
           ll miniright=minnext[i]-i;
            
           ll maxileft=i-maxprev[i];
            
           ll maxiright=maxnext[i]-i;
            
         ans += ((maxileft * maxiright) - (minileft * miniright)) * nums[i];

            
        }
        return ans;
        
        
    }
};