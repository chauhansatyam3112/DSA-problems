class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        
        unordered_map<int,int>mp;
       
        int n=nums2.size();
        
        for(int i=n-1;i>=0;i--)
        {
           
           
            while(!st.empty() and st.top()<nums2[i])
            {
                st.pop();
                   
            }
            
           if (!st.empty() && nums2[i] < st.top()) {
               
            mp[nums2[i]] = st.top();
               
           st.push(nums2[i]);
               
        } else {
               
           mp[nums2[i]] = -1;
               
          st.push(nums2[i]);
        }
           
           
            
        }
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};