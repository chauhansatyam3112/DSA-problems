class Solution {
public:
     int minimumAddedCoins(vector<int>& coins, int target) {
        
         long long sum = 0;
        int coin = 0;

       sort(coins.begin(), coins.end());

        for (auto it : coins) {
            while (it > sum + 1) {
                coin++;
                sum += sum + 1; 

                if (sum >= target) return coin;
            }

            sum += it;

            if (sum >= target) return coin;
        }
        while (sum < target) {
            coin++;
            int p = sum + 1;
            sum += p;
        }

        return coin;
     }
    
        
    int minPatches(vector<int>& nums, int n) {
        
        return minimumAddedCoins(nums,n);
        
    }
};