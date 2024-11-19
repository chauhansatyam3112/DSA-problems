class Solution {
public:
    int shortestSubarray(vector<int>& nums, int K) {
         deque<int> dq; 
    int n = nums.size();
    vector<long long> pre_sum(n + 1, 0); 
    int res = INT_MAX;

   
    for (int i = 0; i < n; ++i) {
        pre_sum[i + 1] = pre_sum[i] + nums[i];
    }

  
    for (int j = 0; j <= n; ++j) {
       
        while (!dq.empty() && pre_sum[j] - pre_sum[dq.front()] >= K) {
            res = min(res, j - dq.front());
            dq.pop_front();
        }

        
        while (!dq.empty() && pre_sum[j] <= pre_sum[dq.back()]) {
            dq.pop_back();
        }

       
        dq.push_back(j);
    }

    return res == INT_MAX ? -1 : res;

    }
};