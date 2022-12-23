class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int res1=0;int count1=1;int res2=0,count2=0;vector<int>v;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[res1]==nums[i]){
                count1++;}
            else if(nums[res2]==nums[i]){
                count2++;}
                
            else if(count1<=0)
            {
                count1 =1;res1=i;
            }
             
                
          else   if(count2<=0)
            {
                count2 =1;res2=i;
            }
            else{
                count1--;count2--;
            }
        }
        
        
        count1 =0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[res1]==nums[i]){
                count1++;}
          else   if(nums[res2]==nums[i]){
                count2++;}
        }
            if(count1>(nums.size())/3)
                v.push_back(nums[res1]);
        
               
               if(count2>(nums.size())/3)
               
           
           
                v.push_back(nums[res2]);
                
            
        
        return v;
                
        
        //return nums[res];
    }
};