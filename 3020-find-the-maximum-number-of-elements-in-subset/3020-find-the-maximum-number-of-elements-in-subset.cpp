class Solution {
public:
    int maximumLength(vector<int>& nums) {
        
        
        unordered_map<double,int>mp;
        
        int maxi=0;
        
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it:mp)
        {
            cnt=1;
            
            int x=it.first;
            
            double root=pow(x,0.5);
            
            while(root>=2)
            {
                if(mp.find(root)!=mp.end())
                {
                    if(mp[root]>=2)
                    {
                        cnt+=2;
                        
                    }
                    else 
                        break;
                    
                    root=pow(root,0.5);
                }
                
                else
                    break;
            }
            
            maxi=max(maxi,cnt);
            cnt=0;
            
            
            
            
        }
        
        int ans=0;
        
        if(mp.find(1)!=mp.end())
        {
            
            ans=mp[1];
            
            
            
        }
        
        if(ans>maxi)
        {
            if(ans&1)return ans;
            else
                return ans-1;
            
        }
        
        
        return maxi;
        
        
    }
    
    
};