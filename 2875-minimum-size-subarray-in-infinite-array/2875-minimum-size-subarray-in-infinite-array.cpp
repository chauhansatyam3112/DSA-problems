class Solution {
public:
    #define ll long long
    int minSizeSubarray(vector<int>& nums, int target) {
        
        
        ll sum=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        if(target%sum==0)
        {
            return (target/sum)*n;
        }
        
        int cnt=0;
        int rem=0;
        
        if(target>sum)
        {
            cnt=(target/sum)*n;
            
            target%=sum;
            
        }
        
        int ans=INT_MAX-1;
        
        int i=0,j=0;
        int res=0;
        
        while(j<2*n)
        {
            res+=nums[j%n];
            
            while(i<=j && res>target)
            {
                res-=nums[i%n];
                
                i++;
            }
            
            if(res==target)
            {
                ans=min(ans,j-i+1);
            }
            j++;
            
        }
        return ans==INT_MAX-1?-1:cnt+ans;
        
    }
};