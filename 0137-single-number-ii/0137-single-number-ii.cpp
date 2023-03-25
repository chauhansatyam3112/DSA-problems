class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
//        unsigned int ans=0 , shift=1;
       
//         for(int i=0;i<32;i++)
//         {
//             int cnt=0;
//             for(auto ele:nums)
//             {
//                 if(ele&shift)
//                 {
//                     cnt++;
//                 }
//             }
//             if(cnt%3!=0)
//             {
//                 ans+=shift;
                
//             }
//           shift*=2;
//         }
//         return ans;
        //Using XOR and AND 
        int ones = 0;
        int twos = 0;
        for(auto ele: nums)
        {
            ones = (ones^ele) & (~twos);
            twos = (twos^ele) & (~ones);
        }
        return ones;
    }
};