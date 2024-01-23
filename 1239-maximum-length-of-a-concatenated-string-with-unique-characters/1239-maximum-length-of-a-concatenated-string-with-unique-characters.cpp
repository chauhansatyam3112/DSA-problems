class Solution {
public:
    int maxi=0;
    
    bool unique(string &str)
    {
        vector<int>v(26,0);
        
        for(int i=0;i<str.length();i++)
        {
            if(v[str[i]-'a']==1)return false;
            
            
            v[str[i]-'a']++;
        }
        
        
        
        return true;
    }
    
    
    void solve(int idx,vector<string>&nums,string str)
    {
        
        
        if(!unique(str))return ;
        
       
        
        
        int len=str.length();
        
        maxi=max(maxi,len);
        
         if(idx>=nums.size())return ;
        
        solve(idx+1,nums,str+nums[idx]);
        
        solve(idx+1,nums,str);
        
    }
    
    int maxLength(vector<string>& arr) {
        maxi=0;
        
        solve(0,arr,"");
        
        return maxi;
        
    }
};