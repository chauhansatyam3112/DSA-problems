class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        
         int n = nums1.size();

    int maxi1 = *max_element(nums1.begin(), nums1.end());
        
    int maxi2 = *max_element(nums2.begin(), nums2.end());
        
        
     // if(maxi1!=nums1[n-1] || maxi2!=nums2[n-1])return -1;   

    vector<int> v1 = nums1;
        
    vector<int> v2 = nums2;

    int cnt1 = 0;

    for (int i = 0; i < n; i++) {
        
        int x1 = nums1[n - 1];
        
        int x2 = nums2[n - 1];

        if (nums1[i] > x1) {
            
            if (nums2[i] > x1 ) return -1;
            
            cnt1++;
        } else if (nums2[i] > x2) {
            
            if (nums1[i] > x2) return -1;
            cnt1++;
        }
    }

    swap(nums1[n - 1], nums2[n - 1]);

    int cnt2 = 0;

    for (int i = 0; i < n; i++) {
        
        int x1 = nums1[n - 1];
        
        int x2 = nums2[n - 1];

        if (nums1[i] > x1) {
            
            if (nums2[i] > x1 || nums1[i] > x2) return -1;
            
            cnt2++;
            
        } else if (nums2[i] > x2) {
            
            if (nums1[i] > x2 || nums2[i] > x1) return -1;
            
            cnt2++;
        }
    }

    return min(cnt1, cnt2 + 1);

    }
};