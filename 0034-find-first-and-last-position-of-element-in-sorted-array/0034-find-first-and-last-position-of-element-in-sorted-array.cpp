class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
         int n = nums.size();

     
        int low = 0;
        int high = n - 1;

      
        int firstOccIdx = -1;

     
        while(low <= high)
        {
            
            int mid = low + (high - low) / 2;

          
            if(nums[mid] == target)
            {
                
                firstOccIdx = mid;

                
                high = mid - 1;
            }
         
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }

            
            else
            {
                high = mid - 1;
            }
        }

      
    ans.push_back(firstOccIdx);
    

   
        int l = 0;
        int h = nums.size()-1;

       
        int lastOccIdx = -1;

       
        while(l <= h)
        {
           
            int mid = l + (h - l) / 2;

            
            if(nums[mid] == target)
            {
             
                lastOccIdx = mid;

               
                l = mid + 1;
            }
            
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }

            
            else
            {
                h = mid - 1;
            }
        }

        
    ans.push_back(lastOccIdx);
    
return ans;

    }
};