class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
       
        long long cnt=0;
        int j=0;
        // 0 0 0 // 000 0 0 0 00 00
        //00 // 0 0 00 
        // 0000//0 0 0 0 00 00 000 000 
        //00000//0 0 0 0 0 00 00 00 00 000 000 000 0000 0000 
        //n factorial 
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0){
               cnt++;
               if(i!=nums.size()-1)
              continue;
           }
         
        
             if(cnt!=0 || i==nums.size()-1)
             {
                 while(cnt)
                 {
                     ans+=(cnt);
                     cnt--;
                    
                 }
                 
                
             }
           
         
         
           
       }
        return ans;
    }
};