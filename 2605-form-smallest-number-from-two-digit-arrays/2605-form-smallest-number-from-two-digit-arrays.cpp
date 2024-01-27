class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
      map<int,int>mp;
        for(int i=0;i<nums1.size();i++) mp[nums1[i]]++;
        for(int i=0;i<nums2.size();i++) mp[nums2[i]]++;
        
        for(auto it:mp)if(it.second>=2)return it.first;
        
        
       sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int p=nums1[0],q=nums2[0];
        
      
        
        int num1=p*10+q;
        int num2=p+10*q;
        
        return num1>num2?num2:num1;
        
        
    }
};