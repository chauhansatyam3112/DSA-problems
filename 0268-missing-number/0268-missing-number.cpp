class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int count=0;
        // int n=nums.size();sort(nums.begin(),nums.end());int p=0;int j=0;
        // for(int i=0;i<n;i++ ){
        //     if(nums[j]==i)
        //     {
        //         count++;j++;
        //     }
        // }
        // return count;
        
    /*sort(nums.begin(),nums.end());
    int left = 0, right = nums.size(), mid= (left + right)/2;
    while(left<right){
        mid = (left + right)/2;
        if(nums[mid]>mid) right = mid;
        else left = mid+1;
    }
    return left;*/
        int xorr=0;
        for(int i=0;i<nums.size();i++)
        {
            xorr^=nums[i];
        }
        for(int i=0;i<=nums.size();i++)
        {
            xorr^=i;
        }
        return xorr;
    }
};