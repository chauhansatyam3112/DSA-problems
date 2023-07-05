class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        
        vector<int>ans(nums.size(),0);
        
        int i=0,j=1;
        
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]>0)
            {
                ans[i]=nums[k];
                i+=2;
            }
            if(nums[k]<0)
            {
                ans[j]=nums[k];
                j+=2;
            }
            
        }
        
        return ans;
        
//         int j=1;
        
//         if(nums[0]<0)
//         {
//             while(nums[j]<0 && j<nums.size())
//             {
                
                    
//                 j++;
                
//                 if(nums[j]>0)
//                 {
//                     break;
//                 }
//             }
            
//             swap(nums[j],nums[0]);
//         }
       
//         for(int i=1;i<nums.size()-1;)
//         {
//             if(nums[i]>=0)
//             {
                
//                 if(nums[i+1]<0 && nums[i-1]<0)
//                 {
//                     i++;
//                 }
                
//                 else if(nums[i+1]<0 && nums[i-1]>=0)
//                 {
//                     swap(nums[i],nums[i+1]);
//                     i+=2;
//                 }
                
//                 else if(nums[i+1]>=0 && nums[i-1]<0)
//                 {
//                     swap(nums[i],nums[i-1]);
//                     i+=2;
//                 }
                
//             }
            
//             else if(nums[i]<0)
//             {
             
//                  if(nums[i+1]>0 && nums[i-1]>0)
//                 {
//                     i++;
//                 }
                
//                 else if(nums[i+1]<0 && nums[i-1]>0)
//                 {
//                     swap(nums[i],nums[i-1]);
//                     i+=2;
//                 }
                
//                 else if(nums[i+1]>0 && nums[i-1]<0)
//                 {
//                     swap(nums[i],nums[i+1]);
//                     i+=2;
//                 }
                
//             }
//         }
        
//         return  nums;
//     }
    }
};