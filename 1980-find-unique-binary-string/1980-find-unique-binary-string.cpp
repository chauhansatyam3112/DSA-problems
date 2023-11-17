class Solution {
public:
    
    string ans="";
    
    void solve(string str,set<string>&st,int n)
    {
        
     if(n==0)
     {
         if(st.find(str)==st.end())
         {
             ans=str;
             return;
             
         }
         
         else{
             return ;
         }
     }
         
        str+='0';
        solve(str,st,n-1);
        
        str.pop_back();
        
        str+='1';
        
        solve(str,st,n-1);
        
        
        
        
    }
        
        
    string findDifferentBinaryString(vector<string>& nums) {
        
        set<string>st;
        
        for(auto it:nums)
        {
            st.insert(it);
        }
        
        int n=nums[0].length();
        
        solve("",st,n);
        
        return ans;
    }
};