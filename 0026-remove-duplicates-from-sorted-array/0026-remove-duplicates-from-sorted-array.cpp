class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
//         int cnt=nums[0];
        
        int i=0,j=1;
        int n=nums.size()-1;
        int ele=nums[n];
        
        
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                nums[i]=nums[j];
                j++;
            }
            else if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
        
        
//         while(i<nums.size() && j<nums.size())
//         {
//            int  prev=nums[i];
//              if(cnt==(ele-nums[0]+1))
//             {
//                 break;
//             }
            
//             if(nums[j]==prev)
//             {
//                 nums[j]= ++cnt;
//                 j++;
//             }
//             else if(nums[j]!=prev)
//             {
//                 i=j;
//                 nums[j]= ++cnt; j++;
                
//             }
           
//         }
//         return cnt;
//         int prev=nums[0];
//         int cnt=nums[0];
//         int p=0;
//         while(i<nums.size() && j<nums.size())
//         {
//             while(nums[j]==prev)
//             {
//                nums[i]=nums[j];
//                 j++;
                
//                continue; 
//             }
            
//             if(nums[j]!=prev)
//             {
//                 nums[p++]=nums[j];
//                 i=j;
                
//                prev=nums[i];
//                 j++;
//             }
              
//         }
//         return i;
        
        
       
    }
};