class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
//         for(int i=0;i<=n-1;i++)
//         {
//             if(nums[i]==n)
//             {
//                 continue;
//             }
//             if(nums[i]!=-1)
                
//          // -9 -6 -4 -2 -3 -5 -7 -0 1
//          //  0  1  2  3  4  5  6  7 8
                
//                 //-3 -0 1
//                 // 0  1 2
          
//             nums[nums[i]]=-1*nums[nums[i]];
//             else{
//                 int p=-1*nums[i];
//                 nums[p]=-1*nums[p];
             
//             }  
//         }
//         int ans=nums.size();
//         for(int i=0;i<=n-1;i++)
//         {
//             if(nums[i]>0){
//                 ans=i;
//              break;}
//         }
//         return ans;
        
        int xorr=0;
        for(int i=0;i<n;i++)
        {
            xorr^=i+1;
        }
        for(int i=0;i<n;i++)
        {
            xorr^=nums[i];
        }
        return xorr;
    }
};