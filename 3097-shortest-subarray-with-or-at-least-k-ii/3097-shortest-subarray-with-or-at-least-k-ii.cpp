class Solution {
public:
    
    void solve(int val,vector<int>&bit,bool flag)
    {
        int i=0;
        
        while(val>0)
        {
            bit[i]= bit[i]+(flag==true?1:-1)*val%2;
            
            val/=2;
            
            i++;
        }
        
    }
    
    
    bool isTrue(vector<int>&bit,int k)
    {
        
        int res=0;
        
        for(int i=0;i<32;i++)
        {
            res+=(bit[i]?1:0)*pow(2,i);
            
            
        }
        
        
        return res>=k;
    }
    
    int minimumSubarrayLength(vector<int>& nums, int k) {
        
        int i=0,j=0;
        
        vector<int>bit(32,0);
        
        int mini=INT_MAX;
        
        while(j<nums.size())
        {
            solve(nums[j],bit,true);
            
            while(isTrue(bit,k) && i<=j)
            {
                mini=min(mini,j-i+1);
                
                solve(nums[i],bit,false);
                
                i++;
            }
            
            j++;
        }
        
        return mini==INT_MAX?-1:mini;
    }
};