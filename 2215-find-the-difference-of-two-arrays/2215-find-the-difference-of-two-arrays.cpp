class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>>ans;
        
       
        set<int>temp;
       
        for(int i=0;i<nums1.size();i++)
        {
           int j=0;
          for(;j<nums2.size();j++)
           {
               if(nums1[i]!=nums2[j])
                   continue;
               else
                   break;
           }
            if(j==nums2.size())
            {
               temp.insert(nums1[i]);
                
            }
        }
        vector<int>v(temp.begin(),temp.end());
        ans.push_back(v);
        v.clear();
        temp.clear();
        
        for(int i=0;i<nums2.size();i++)
        {
          int j=0;

          for(;j<nums1.size();j++)
           {
               if(nums2[i]!=nums1[j])
                    continue;
               else
                   break;
           }
            if(j==nums1.size())
            {
                temp.insert(nums2[i]);
                
            }
        }
    vector<int>v1(temp.begin(),temp.end());
        ans.push_back(v1);
        return ans;
    }
};