class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int ele1 = INT_MAX, ele2 = INT_MAX; 
    int cnt1 = 0, cnt2 = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == ele1)
            cnt1++;
        else if(nums[i] == ele2)
            cnt2++;
        else if(cnt1 == 0) {
            cnt1 = 1;
            ele1 = nums[i];
        }
        else if(cnt2 == 0) {
            cnt2 = 1;
            ele2 = nums[i];
        }
        else {
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1 = 0;
    cnt2 = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == ele1)
            cnt1++;
        else if(nums[i] == ele2)
            cnt2++;
    }
    
    vector<int> ans;
    
    if (cnt1 > nums.size() / 3) {
        ans.push_back(ele1);
    }
    if (cnt2 > nums.size() / 3) {
        ans.push_back(ele2);
    }
    
    return ans;
}

};