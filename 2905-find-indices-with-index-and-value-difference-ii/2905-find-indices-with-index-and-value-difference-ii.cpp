class Solution {
public:
   static  bool compare(const pair<int, int>& a, const pair<int, int>& b) {
       
        return a.first <b.first;
    }

   int solve(vector<pair<int, int>>& v, int target, int idx, int i) {
       
    auto it = lower_bound(v.begin(), v.end(), make_pair(target, 0), compare);

    while (it != v.end() && abs(idx - it->second) < i) {
        
        ++it;
    }

    if (it != v.end() && abs(idx - it->second) >= i) {
        
        return it->second;
    }

    return -1;
}

    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        
        if(valueDifference==0 && nums.size()>indexDifference)
        {
            return {0,indexDifference};
        }
        
        vector<pair<int, int>> v;

        for (int i = 0; i < nums.size(); i++) {
            
            v.push_back(make_pair(nums[i], i));
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < nums.size(); i++) {
            
            int target = v[i].first + valueDifference;
            
            int position =  solve(v, target,v[i].second,indexDifference);

            if (position != -1) {
                
                return {v[i].second, position};
            }
        }

        return {-1, -1};
    }
};