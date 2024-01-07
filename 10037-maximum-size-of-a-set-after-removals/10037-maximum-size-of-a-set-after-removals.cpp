class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int>st1,st2,st3;
        
        int n=nums1.size();
        
        for(int i=0;i<n;i++)st1.insert(nums1[i]);
        
        for(int i=0;i<n;i++)
        {
            st2.insert(nums2[i]);
            
           if(st1.find(nums2[i])!=st1.end())
            {
                st3.insert(nums2[i]);
            }
        }
        
        int p=st1.size(),q=st2.size(),r=st3.size();
        
        return min(min(n/2,p-r)+min(n/2,q-r)+r,n);
    }
};