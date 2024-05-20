class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        
        long long ans=0;
        
        unordered_map<int,unordered_map<char,long long>>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            string str=to_string(nums[i]);
            
            for(int j=0;j<str.length();j++)
            {
                mp[j][str[j]]++;
            }
            
        }
        
        for(int i=0;i<nums.size();i++)
        {
            string str=to_string(nums[i]);
            
            for(int k=0;k<str.length();k++)
            {
                char ch=str[k];
                
                ans+=(1LL*nums.size()-mp[k][ch]);
            }
        }
        return ans/2;
        
    }
};