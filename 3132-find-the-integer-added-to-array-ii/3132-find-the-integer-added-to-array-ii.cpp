class Solution {
public:
    
    int solve(int i,int j,vector<int>&nums1,vector<int>&nums2)
    {
        unordered_map<int,int>mp;
        
        int idx=0;
        
       for(int k=0;k<nums1.size();k++)
       {
           if(k==i || k==j)continue;
           
           int diff=nums2[idx]-nums1[k];
           
           mp[diff]++;
           
           idx++;
               
       }
        
       for(auto it:mp)
       {
           if(it.second==nums2.size())
           {
               return it.first;
           }
       }
        
      return INT_MAX;  
        
        
    }
    
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        
        int mini=INT_MAX;
        
        sort(nums1.begin(),nums1.end());
        
        sort(nums2.begin(),nums2.end());
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=i+1;j<nums1.size();j++)
            {
                int p=solve(i,j,nums1,nums2);
                
                mini=min(mini,p);
            }
        }
        
        return mini;
    }
};