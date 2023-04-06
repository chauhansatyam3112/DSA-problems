class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans(n,0),pre_product(n),post_product(n);
        //int n=nums.size();
        
     
        pre_product[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            pre_product[i]=pre_product[i-1]*nums[i];
        }
       
         post_product[n-1]=nums[n-1];
        
         for(int i=n-2;i>=0;i--)
        {
            post_product[i]=post_product[i+1]*nums[i];
        }
        if(nums[0]!=0)
        ans[0]=post_product[0]/nums[0];
        else
            ans[0]=post_product[1];
        if(nums[n-1]!=0)
        ans[n-1]=pre_product[n-1]/nums[n-1];
        else
            ans[n-1]=pre_product[n-2];
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]!=0)
            ans[i]=(post_product[i]/nums[i])*(pre_product[i]/nums[i]);
            else
            ans[i]=(post_product[i+1])*(pre_product[i-1]);
                
            
        }
        return ans;
    }
};