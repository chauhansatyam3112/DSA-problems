class Solution {
public:
     bool isPalindrome(int n) {
         
        long long r, sum = 0, temp;
         
        temp = n;
        while (n > 0) {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
        return temp == sum;
    }

    long long solve(vector<int>& nums, int r) {
        
        long long cost = 0;
        
        
        for (int n : nums) {
            
            cost += abs(n - r);
        }
        return cost;
    }
    long long minimumCost(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        
        int middle = 0;
        
        if (n == 1) return 0;

        if (n % 2 != 0) {
            
            middle = nums[(n) / 2];
            
        } else {
            
            middle = (nums[(n + 1) / 2] + nums[n / 2]) / 2;
        }
        
        
        long long ans=1e15;
        
        
        if(isPalindrome(middle)) {
            
            ans=solve(nums,middle);
        }
        
        long long low=middle-1;
        
        long long high=middle+1;
        
        long long left=-1,right=-1;
        
        while(left==-1 || right==-1) {
            
            if(left==-1 && isPalindrome(low)) {
                left=low;
            }
            if(right==-1 && isPalindrome(high)) {
                right=high;
            }
            low--;
            
            high++;
        }

        return min(ans,min(solve(nums,right),solve(nums,left)));
    }
};