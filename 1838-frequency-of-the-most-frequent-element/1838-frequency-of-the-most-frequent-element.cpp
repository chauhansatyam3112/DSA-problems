class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
     
        
       sort(nums.begin(),nums.end());
        
        
       long int sum=0, maxi=1, i=0,j=0;
        
       for(j=0;j<nums.size();j++)
       {
           sum+=nums[j];
           
           long int avail=(sum+k);
           
           long int require=(j-i+1)*nums[j];
           
           if(i+1<=j && (require)>avail)
           {
               sum-=nums[i];
               i++;
               
           }
           
           maxi=max(maxi,(j-i+1));
       }
        return maxi;
    }
};