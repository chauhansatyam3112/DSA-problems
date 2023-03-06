class Solution {
public:
   
    
    int findKthPositive(vector<int>& arr, int k) {
       /* vector<int>v;int ans=0;int count=0;int j=0;
        int n =  arr.size();
        if (k <= arr[0]-1)
            return k;
        
        k -= arr[0]-1;
        
        for(int i=0; i<n-1; i++){
            
            int currMissing = arr[i+1]-arr[i]-1;
            
            if(currMissing >= k)
                return arr[i]+k;
            
            else
                k -= currMissing;
        }
        
        
        return arr[n-1]+k;*/
        int n = arr.size();
        int left = 0, right = n-1;
        int missing  = compute(arr[n-1], n);
        while(left <= right) {
            int mid = left + (right-left)/2;
            missing = compute(arr[mid], mid+1);
            
            if(missing >= k) right = mid-1;
            else left = mid+1;
        }
        
        
        if(right == -1) return k;
        return arr[right] + k-compute(arr[right], right+1);
        
    }
    
    int compute(int actual, int expected){
        return actual - expected;
        
    }
};