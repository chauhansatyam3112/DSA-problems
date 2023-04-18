class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        
        int odd=0;
        int even=0;
        int ans=0;
        int mod=1e9+7;
        int sum=0;
        
        for(int i=0;i<arr.size();i++)
        {
            sum=(sum+arr[i])%2;
            if(sum)
            {
                ans+=even+1;
            }
            else{
                ans+=odd;
            }
            if(sum)
            {
                odd++;
            }else{
                even++;
            }
            ans=ans%mod;
        }
        return ans;
    }
};