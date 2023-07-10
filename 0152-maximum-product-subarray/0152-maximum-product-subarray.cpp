class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
   int product=1,posprod=1;
        
        int maxi=INT_MIN,res=0;
        
      
        
  for(int i=0;i<nums.size();i++){
//         {
             product*=nums[i];
        
        
          maxi=max(product,maxi);
      
//             
            
            if(product==0)
            {
                 product=1;
//                 while(product<0 && i<nums.size())
//                 {
                    
//                     product*=nums[i];
//                     if(nums[i]>=0)
//                     posprod*=nums[i];
                    
//                     i++;
//                 }
                
                
            }
    }
         product=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            product*=nums[i];
            maxi=max(product,maxi);
            
            if(product==0) product=1;
            
        }
              
//                 maxi=max(maxi,product);
//                 if(posprod>=maxi && i!=nums.size())
//                 {
//                     maxi=posprod;
//                 }
//                 // if(res>maxi)
//                 // {
//                 //     maxi=res;
//                 // }
            
//               if(posprod!=0)
//               {
//                   posprod=1;
//               }
               
            
//         }
        
        return maxi;
    }
};