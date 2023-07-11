class Solution {
public:
    
    int cnt=0;
     void merge(vector<int>&arr,int low,int mid,int high )
    {
        vector<int> temp; 
       int left = low;      
    int right = mid + 1;   
    
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

   
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

   
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
    void  reversePairs(vector<int>&nums,int low,int mid,int high)
    {
        int right=mid+1;
        
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && nums[i]>(1LL*nums[right]*2))
            {
                right++;
                
            }
            cnt=cnt+(right-(mid+1));
            
        }
        
    }
    
   
    void mergesort(vector<int>&nums,int low,int high)
    {
        
        if(low>=high)
        {
            return;
        }
        int mid=(low+high)/2;
        
        
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        
        reversePairs(nums,low,mid,high);
        
        merge(nums,low,mid,high);
        
        
    }
    int reversePairs(vector<int>& nums) {
        
        int low=0,high=nums.size()-1;
        mergesort(nums,low,high);
        return cnt;
        
        
        
       
    }
};