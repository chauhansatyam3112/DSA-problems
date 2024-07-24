class Solution {
public:
    
    static bool comp(pair<int,int>&p1,pair<int,int>&p2)
    {
        if(p1.first==p2.first)
        {
            return  p1.second<p2.second;
        }
        
        return p1.first<p2.first;
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<mapping.size();i++)
        {
            mp[i]=mapping[i];
            
        }
        
  vector<pair<int,int>>ans;
        
   for(int i=0;i<nums.size();i++)
   {
       int p=nums[i];
       
     string str="";
       
       if (p == 0) {
            str += (mp[0] + '0'); 
        } else {
       
       while(p>0)
       {
           int q=p%10;
           
           str+=(mp[q]+'0');
           
         
           
           p=p/10;
       }
           
       }
       
       reverse(str.begin(),str.end());
       
       ans.push_back({stoi(str),i});
       
   }
         sort(ans.begin(),ans.end(),comp);
        
        
        
        vector<int>res;
        
       
       
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(nums[ans[i].second]);
            
        }
        
        return res;
       
           
    }
};