class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        /*unordered_map<int,int>mp;int cnt=1;int maxi=INT_MIN;
        if(nums.size()==0)
            return 0;
        if(nums[0]==0 && nums.size()==1)
            return 1;
        
        for(int i=0;i<nums.size();i++)
        {
            
            mp[nums[i]]++;
           
       }
        if(mp.size()==1)
            return 1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int p=(it->first);
            if(mp.find(p- 1)!=mp.end())
                continue;
            
            else
            {
                int cnt = 0;
                int q = p;
             while(mp.find(q)!=mp.end()){
                q++;cnt++;}
                maxi=max(cnt,maxi);}
            
           // ++it;cnt=1;
            
        }
        
        return maxi==INT_MIN?1:maxi;*/
        unordered_set<int>s;
        int res=0;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
            
        }
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i]-1)==s.end()){
                int  curr=1;
            while(s.find(nums[i]+curr)!=s.end())
            {
                curr++;
            }
            res=max(curr,res);
                
            }
            
                
        }
        return res;
    }
};