class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
    
        sort(nums.begin(),nums.end());
        int n=nums.size();
      //  int k=0;
        int left=0,right=nums[n-1]-nums[0];
        
        while(left<right)
        {
            int k=0;
            int mid=(left+right)/2;
            for(int i=1;i<n && k<p;i++)
            {
                if(nums[i]-nums[i-1]<=mid)
                {
                    k++;i++;
                }
            }
            if(k>=p)
            {
                right=mid;
            }
            else{
                left=mid+1;
            }
            
            
        }
        return left;
            
    }
};