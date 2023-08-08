class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        
        
         if(nums.size()<=2)
        return true;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]+nums[i-1]>=m)
            return true;
        }

        return false;
        
        
//         int n=nums.size();
//         vector<int>pre_sum(n+1);
        
//         pre_sum[0]=nums[0];
//         for(int i=1;i<nums.size();i++)
//         {
//             pre_sum[i]=pre_sum[i-1]+nums[i];
//         }
//         vector<int>suffix_sum(n+1);
        
//         suffix_sum[n-1]=nums[n-1];
//         for(int i=n-2;i>=0;i--)
//         {
//             suffix_sum[i]=suffix_sum[i+1]+nums[i];
//         }
        
//         int cnt=0;
//         int j=0;
        
//         for(int i=n-1;i>=0;i--)
//         {
            
//             cnt++;
//             if(pre_sum[i-1]>=m)
//             {
//                 cnt++;
                
//             }
            
           
//             else{
//                 j=i;
//                 break;
                
//             }
            
//         }
        
        
//         for(int i=0;i<nums.size();i++)
//         {
//             cnt++;
//             int rem=suffix_sum[j+1]-suffix_sum[i+1];
            
//             if(rem>=m)
//             {
//                 cnt++;
//             }
            
//             if(j-i+1==2)
//             {
//                 cnt+=2;
//             }
            
            
//         }
        
//         if(cnt>=n)return true;
//         else
//             return false;
    }
};