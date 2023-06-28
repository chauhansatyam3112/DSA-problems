class Solution {
public:
    
   
    void reverse(vector<int>&nums,int start,int end)
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            
            end--;start++;
        }
    }
     void rotate(vector<int>& nums, int k) {
         
         int n=nums.size();
         k=k%n;
         if(k==0)
          return;
       
     reverse(nums,0,nums.size()-1);
     reverse(nums,0,k-1);
     reverse(nums,k,nums.size()-1);
         
       
        
    }
};